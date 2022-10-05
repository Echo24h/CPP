/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:58:14 by gborne            #+#    #+#             */
/*   Updated: 2022/10/05 16:18:25 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

template< typename T >
T const &	max( T const & x, T const & y ) {
	return ( (x>y) ? x : y );
}

template< typename T >
T const &	min( T const & x, T const & y ) {
	return ( (x<y) ? x : y );
}

template< typename T >
void		swap( T & x, T & y ) {
	T	tmp;

	tmp = x;
	x = y;
	y = tmp;
}

#endif
