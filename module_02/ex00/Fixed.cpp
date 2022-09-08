/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:31:17 by gborne            #+#    #+#             */
/*   Updated: 2022/08/25 17:33:28 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _n( 0 ) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src ) {

	std::cout << "Copy constructor called" << std::endl;
	this->_n = src.getRawBits();
	return ;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_n);
}

void	Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_n = raw;
	return ;
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->_n = rhs.getRawBits();
	return (*this);
}

