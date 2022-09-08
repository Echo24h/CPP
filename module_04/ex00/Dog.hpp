/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:10:48 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 21:47:41 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

public:

	Dog( void );
	Dog( Dog const & src );

	Dog &			operator=( Dog const & rhs );

	~Dog();

	void	makeSound( void ) const;
};

#endif
