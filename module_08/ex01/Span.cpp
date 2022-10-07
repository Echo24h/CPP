/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:45:11 by gborne            #+#    #+#             */
/*   Updated: 2022/10/07 16:32:43 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span ( void ) : _n(0) {
	return ;
}

Span::Span( unsigned int const n ) : _n(n) {
	return ;
}

Span::Span( Span const & src ) {
	*this = src;
	return ;
}

Span &	Span::operator=( Span const & rhs ) {
	this->_n = rhs._n;
	this->_lst = rhs._lst;
	return *this;
}

Span::~Span( void ) {
	return ;
}

void	Span::addNumber( int const numb ) {
	if (this->_lst.size() >= this->_n)
		throw NumberLimitReachedException();
	this->_lst.push_back(numb);
	return ;
}

void	Span::addNumbers( std::list<int>::iterator begin, std::list<int>::iterator end ) {
	if ((std::distance(begin, end) + this->_lst.size()) > this->_n)
		throw NumberLimitReachedException();
	this->_lst.insert(this->_lst.end(), begin, end);
	return ;
}

int	getShortestSpan( std::list<int> lst ) {

	std::list<int>	lst_cpy = lst;
	lst_cpy.sort();

	std::list<int>::iterator	it = lst_cpy.begin();
	std::list<int>::iterator	tmp = it;
	std::list<int>::iterator	ite = lst_cpy.end();
	int							shortest_span = INT_MAX;

	while (++tmp != ite) {
		if (*tmp - *it < shortest_span)
			shortest_span = *tmp - *it;
		it++;
	}

	return shortest_span;
}

int		Span::shortestSpan( void ) const {
	if (this->_lst.size() < 2)
		throw NoDistanceFoundException();
	return (getShortestSpan(this->_lst));
}

int	getMax( std::list<int> lst ) {

	std::list<int>::iterator	it = lst.begin();
	std::list<int>::iterator	ite = lst.end();
	int							max = INT_MIN;

	for (; it != ite; it++) {
		if (*it > max)
			max = *it;
	}
	return max;
}

int	getMin( std::list<int> lst ) {

	std::list<int>::iterator	it = lst.begin();
	std::list<int>::iterator	ite = lst.end();
	int							min = INT_MAX;

	for (; it != ite; it++) {
		if (*it < min)
			min = *it;
	}
	return min;
}

int		Span::longestSpan( void ) const {
	if (this->_lst.size() < 2)
		throw NoDistanceFoundException();
	return (getMax(this->_lst) - getMin(this->_lst));
}

const char *	Span::NumberLimitReachedException::what() const throw() {
	return "Number limit reached exception";
}

const char *	Span::NoDistanceFoundException::what() const throw() {
	return "No distance found exception";
}

