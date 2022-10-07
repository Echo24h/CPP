/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:45:31 by gborne            #+#    #+#             */
/*   Updated: 2022/10/07 15:36:04 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <list>
# include <algorithm>
# include <climits>

class Span {

public:

	Span( void );
	Span( unsigned int const n );
	Span( Span const & src );

	Span & operator=( Span const & rhs );

	~Span( void );

	void	addNumber( int const numb );
	void	addNumbers( std::list<int>::iterator begin, std::list<int>::iterator end );

	int		shortestSpan( void ) const;
	int		longestSpan( void ) const;

	class NumberLimitReachedException : public std::exception {
		public:
			const char * what() const throw();
	};

	class NoDistanceFoundException : public std::exception {
		public:
			const char * what() const throw();
	};

private:

	unsigned int		_n;
	std::list<int>		_lst;

};

#endif
