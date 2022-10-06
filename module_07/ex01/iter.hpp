/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:59:14 by gborne            #+#    #+#             */
/*   Updated: 2022/10/06 18:18:54 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T >
void	iter( T * tab, int size, void (*f)( T & ) ) {
	for (int i = 0; i < size; i++)
		f(tab[i]);
}

template< typename T >
void	add( T cell ) {
	cell++;
}

template< typename T >
void	sub( T cell ) {
	cell--;
}

template< typename T >
void	print( T const cell ) {
	std::cout << cell << std::endl;
}

#endif
