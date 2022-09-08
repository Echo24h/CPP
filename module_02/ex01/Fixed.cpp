/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:31:17 by gborne            #+#    #+#             */
/*   Updated: 2022/08/31 20:20:25 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _n( 0 ) {

	//std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src ) {

	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed( int const n ) {

	//std::cout << "Int constructor called" << std::endl;
	this->_n = n << this->_n_frac_bits;
	return ;
}

Fixed::Fixed( float const n ) {

	//std::cout << "Float constructor called" << std::endl;
	this->_n = (int)(roundf(n * (1 << this->_n_frac_bits)));
	return ;
}

Fixed::~Fixed( void ) {

	//std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits( void ) const {

	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_n);
}

void	Fixed::setRawBits( int const raw ) {

	//std::cout << "setRawBits member function called" << std::endl;
	this->_n = raw;
	return ;
}

float	Fixed::toFloat( void ) const {

	return (float)(this->_n) / (1 << this->_n_frac_bits);
}

int		Fixed::toInt( void ) const {

	return (this->_n >> this->_n_frac_bits);
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {

	//std::cout << "Copy assignment operator called" << std::endl;
	this->_n = rhs.getRawBits();
	return (*this);
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs ){

	o << rhs.toFloat();
	return o;
}

