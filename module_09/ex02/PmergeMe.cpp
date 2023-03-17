/* ************************************************************************** */
/*                                      */
/*                            :::     ::::::::   */
/*   PmergeMe.cpp                              :+:   :+:    :+:   */
/*                          +:+ +:+       +:+    */
/*   By: gborne <gborne@student.42.fr>        +#+  +:+       +#+    */
/*                        +#+#+#+#+#+   +#+     */
/*   Created: 2023/03/17 17:24:44 by gborne   #+#  #+#          */
/*   Updated: 2023/03/17 19:12:19 by gborne     ###   ########.fr    */
/*                                      */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ) {
	return ;
}

PmergeMe::PmergeMe( int argc, char ** argv ) {

	calculate(argc, argv);
	return ;
}

PmergeMe::~PmergeMe( void ) {
	return ;
}

bool number_is_too_large(const std::string& str) {
	int sign = 1;
	size_t i = 0;

	if (str[i] == '-') {
		sign = -1;
		i++;
	}

	std::stringstream ss;
	ss << INT_MAX;
	std::string max_int = ss.str();

	while (i < str.length() && std::isdigit(str[i])) {
		int n = str[i] - '0';

		if (max_int.length() < str.length() - i || (max_int.length() == str.length() - i && max_int.compare(str.substr(i)) < 0)) {
			return true;
		}
		if (max_int.length() == str.length() - i && max_int.compare(str.substr(i)) == 0 && sign == -1 && n > 8) {
			return true;
		}

		i++;
	}

	return false;
}

bool is_number( const std::string & arg ) {
		
	for (size_t i = 0; i < arg.size(); i++) {
		
		if (i == 0 && arg[i] == '-')
			continue;
		if (!isdigit(arg[i]))
			return false;
	}
	return true;
}

template <typename T>
void    print( const T & cont ) {

	typename T::const_iterator it = cont.begin();
		
	for (; it != cont.end(); ++it) {
		std::cout << *it;
		if (std::next(it) != cont.end()) {
			std::cout << " ";
		}
	}
	std::cout << std::endl;
}

template <typename T>
void    merge_insertion_sort( T & c )
{
	typedef typename T::value_type value_type;

	// cas de base
	if (c.size() <= 1) {
		return;
	}

	// diviser en deux sous-conteneurs
	T left, right;
	typename T::size_type middle = c.size() / 2;
	typename T::const_iterator it = c.begin();
	for (typename T::size_type i = 0; i < middle; ++i, ++it) {
		left.push_back(*it);
	}
	for (; it != c.end(); ++it) {
		right.push_back(*it);
	}

	// trier les sous-conteneurs
	merge_insertion_sort(left);
	merge_insertion_sort(right);

	// fusionner les sous-conteneurs triés
	c.clear(); // on vide le conteneur original
	typename T::const_iterator left_it = left.begin();
	typename T::const_iterator right_it = right.begin();
	while (left_it != left.end() && right_it != right.end()) {
		if (*left_it < *right_it) {
			c.push_back(*left_it);
			++left_it;
		} else {
			c.push_back(*right_it);
			++right_it;
		}
	}
	for (; left_it != left.end(); ++left_it) {
		c.push_back(*left_it);
	}
	for (; right_it != right.end(); ++right_it) {
		c.push_back(*right_it);
	}

	// trier la séquence fusionnée avec l'algorithme de tri par insertion
	typename T::iterator it1, it2;
	for (it1 = c.begin(); it1 != c.end(); ++it1) {
		value_type temp = *it1;
		it2 = it1;
		while (it2 != c.begin() && temp < *(std::prev(it2))) {
			std::advance(it2, -1);
			*it2 = *(std::next(it2));
		}
		*it2 = temp;
	}
}

void    PmergeMe::calculate( int argc, char ** argv ) {
		
	for (int i = 1; i < argc; i++) {
		
		if (!is_number(std::string(argv[i])))
			throw std::invalid_argument("Error: invalid argument");
		if (number_is_too_large(std::string(argv[i])))
			throw std::invalid_argument("Error: too large number");
		int numb = std::atoi(argv[i]);
		if (numb < 0)
			throw std::invalid_argument("Error: negative number");
		_list.push_back(numb);
		_vector.push_back(numb);
	}
	std::cout << "Before: "; print(_vector);
	clock_t vector_time = clock();
	merge_insertion_sort(_vector);
	vector_time = clock() - vector_time;
	clock_t list_time = clock();
	merge_insertion_sort(_list);
	list_time = clock() - list_time;
	std::cout << "After: "; print(_vector);

	std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector : " << vector_time * 1000000 / CLOCKS_PER_SEC << " us" << std::endl;
	std::cout << "Time to process a range of " << _list.size() << " elements with std::list   : " << list_time * 1000000 / CLOCKS_PER_SEC << " us" << std::endl;
}