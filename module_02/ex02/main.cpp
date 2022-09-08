/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:12:13 by gborne            #+#    #+#             */
/*   Updated: 2022/08/31 21:41:54 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void ) {

	Fixed		a;
	Fixed const	b( 10 );
	Fixed const	c( 42.42f );
	Fixed const	d( b );
	Fixed const	e( 10.001f );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "e is " << e << std::endl;

	std::cout << "( a + b + d ) is " << ( a + b + d ) << std::endl;
	std::cout << "( e > b ) is " << ( e > b ) << std::endl;
	std::cout << "( e != b ) is " << ( e != d ) << std::endl;
	std::cout << "( b == d ) is " << ( b == d ) << std::endl;
	std::cout << "( e * b * c ) is " << ( e * b * c ) << std::endl;

	Fixed		f;
	Fixed const	g( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << f << std::endl;
	std::cout << ++f << std::endl;
	std::cout << f << std::endl;
	std::cout << f++ << std::endl;
	std::cout << f << std::endl;
	std::cout << g << std::endl;
	std::cout << Fixed::max( f, g ) << std::endl;
	std::cout << Fixed::max( f, f ) << std::endl;
	std::cout << Fixed::max( b, c ) << std::endl;

	return 0;
}
