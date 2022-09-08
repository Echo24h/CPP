/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:30:58 by gborne            #+#    #+#             */
/*   Updated: 2022/08/31 21:43:00 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed {

public:

	Fixed( void );
	Fixed( Fixed const & src );
	Fixed( int const n );
	Fixed( float const n );
	~Fixed();

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

	bool	operator>( Fixed const & rhs ) const;
	bool	operator<( Fixed const & rhs ) const;
	bool	operator>=( Fixed const & rhs ) const;
	bool	operator<=( Fixed const & rhs ) const;
	bool	operator==( Fixed const & rhs ) const;
	bool	operator!=( Fixed const & rhs ) const;

	Fixed &	operator=( Fixed const & rhs );
	Fixed	operator+( Fixed const & rhs ) const;
	Fixed	operator-( Fixed const & rhs ) const;
	Fixed	operator*( Fixed const & rhs ) const;
	Fixed	operator/( Fixed const & rhs ) const;

	Fixed &	operator++();      // Prefix increment
	Fixed	operator++( int );  // Postfix increment
	Fixed &	operator--();      // Prefix decrement
	Fixed	operator--( int );  // Postfix decrement

	static Fixed &			min( Fixed & a, Fixed & b );
	static const Fixed &	min( Fixed const & a, Fixed const & b );
	static Fixed &			max( Fixed & a, Fixed & b );
	static const Fixed &	max( Fixed const & a, Fixed const & b );

private:

	int					_n;
	static const int	_n_frac_bits = 8;
};


std::ostream &	operator<<( std::ostream & o, Fixed const & rhs );


#endif
