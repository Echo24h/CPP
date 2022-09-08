/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:12:24 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 21:34:46 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" ) {

	std::cout << "Défault constructor called: Dog (" << this->_type << ")"  << std::endl;
	return ;
}

Dog::Dog( Dog const & src ) : Animal( src ) {

	std::cout << "Copy constructor called: Dog (" << src._type << ")"  << std::endl;
	return ;
}

Dog::~Dog() {

	std::cout << "Destructor called: Dog (" << this->_type << ")"  << std::endl;
	return ;
}

void	Dog::makeSound( void ) const {

	std::cout << "Woaf" << std::endl;
	return ;
}

Dog & Dog::operator=( Dog const & rhs ) {

	std::cout << "Copy assignement operator called: Dog (" << rhs._type << ")"  << std::endl;
	Animal::operator=( rhs );
	return *this;
}
