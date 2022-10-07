/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:27:11 by gborne            #+#    #+#             */
/*   Updated: 2022/10/07 16:29:28 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <algorithm>

class NoOccurenceExcetion : public std::exception {
	public:
		const char * what() const throw() {
			return "No occurence";
		}
};

template< typename T >
typename T::iterator	easyfind( T & type, int n ) {
	typename T::iterator	it = type.begin();
	typename T::iterator	ite = type.end();

	for (; it != ite; ++it) {
		if (*it == n)
			return it;
	}
	throw NoOccurenceExcetion();
}

template< typename T >
typename T::iterator	easyfindbis( T & type, int n ) {
	typename T::iterator	result;

	result = find(type.begin(), type.end(), n);
	if (result == type.end() && *result != n)
		throw NoOccurenceExcetion();
	return result;
}

#endif
