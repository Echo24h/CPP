/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:30:58 by gborne            #+#    #+#             */
/*   Updated: 2022/08/31 20:19:56 by gborne           ###   ########.fr       */
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

	Fixed &	operator=( Fixed const & rhs );

private:

	int					_n;
	static const int	_n_frac_bits = 8;
};


std::ostream &	operator<<( std::ostream & o, Fixed const & rhs );


#endif
