/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:10:48 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 23:11:04 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {

public:

	Dog( void );
	Dog( Dog const & src );

	Dog &			operator=( Dog const & rhs );

	~Dog();

	void	makeSound( void ) const;
	void	sayIdea( void ) const;

private:

	Brain	*_brain;
};

#endif
