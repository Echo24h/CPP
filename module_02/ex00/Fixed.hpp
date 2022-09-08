/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:30:58 by gborne            #+#    #+#             */
/*   Updated: 2022/08/25 17:32:14 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include "iostream"

class	Fixed {

public:

	Fixed( void );
	Fixed( Fixed const & src );
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	Fixed &	operator=( Fixed const & rhs );

private:

	int					_n;
	static const int	_n_frac_bits = 8;
};

#endif
