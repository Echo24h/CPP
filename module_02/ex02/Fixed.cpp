/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:31:17 by gborne            #+#    #+#             */
/*   Updated: 2022/08/31 21:39:41 by gborne           ###   ########.fr       */
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

bool	Fixed::operator>( Fixed const & rhs ) const {
	if (this->_n > rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<( Fixed const & rhs ) const {
	if (this->_n < rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=( Fixed const & rhs ) const {
	if (this->_n >= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=( Fixed const & rhs ) const {
	if (this->_n <= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator==( Fixed const & rhs ) const {
	if (this->_n == rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!=( Fixed const & rhs ) const {
	if (this->_n != rhs.getRawBits())
		return true;
	return false;
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {

	//std::cout << "Copy assignment operator called" << std::endl;
	this->_n = rhs.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+( Fixed const & rhs ) const {

	if ( rhs.toFloat() == rhs.toInt() && this->toFloat() == this->toInt() )
		return Fixed( this->toInt() + rhs.toInt() );
	return Fixed( this->toFloat() + rhs.toFloat() );
}

Fixed	Fixed::operator-( Fixed const & rhs ) const {

	if ( rhs.toFloat() == rhs.toInt() && this->toFloat() == this->toInt() )
		return Fixed( this->toInt() - rhs.toInt() );
	return Fixed( this->toFloat() - rhs.toFloat() );
}

Fixed	Fixed::operator*( Fixed const & rhs ) const {

	if ( rhs.toFloat() == rhs.toInt() && this->toFloat() == this->toInt() )
		return Fixed( this->toInt() * rhs.toInt() );
	return Fixed( this->toFloat() * rhs.toFloat() );
}

Fixed	Fixed::operator/( Fixed const & rhs ) const {

	if ( rhs.toFloat() == rhs.toInt() && this->toFloat() == this->toInt() )
		return Fixed( this->toInt() / rhs.toInt() );
	return Fixed( this->toFloat() / rhs.toFloat() );
}

Fixed &	Fixed::operator++() {

	this->_n++;
	return *this;
}

Fixed &	Fixed::operator--() {

	this->_n--;
	return *this;
}

Fixed	Fixed::operator++( int ) {

	Fixed temp = *this;
	this->_n++;
	return temp;
}

Fixed	Fixed::operator--( int ) {

	Fixed temp = *this;
	this->_n--;
	return temp;
}

Fixed &			Fixed::min( Fixed & a, Fixed & b ) {
	if (a > b)
		return b;
	return a;
}

Fixed const &	Fixed::min( Fixed const & a, Fixed const & b ) {
	if (a > b)
		return b;
	return a;
}

Fixed &			Fixed::max( Fixed & a, Fixed & b ) {
	if (b > a)
		return b;
	return a;
}

Fixed const &	Fixed::max( Fixed const & a, Fixed const & b ) {
	if (b > a)
		return b;
	return a;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs ){

	o << rhs.toFloat();
	return o;
}
