/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:12:24 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 23:06:12 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" ), _brain( new Brain() ) {

	std::cout << "Défault constructor called: Dog (" << this->_type << ")"  << std::endl;
	return ;
}

Dog::Dog( Dog const & src ) : Animal( src ), _brain( new Brain( *src._brain ) ) {

	std::cout << "Copy constructor called: Dog (" << src._type << ")"  << std::endl;
	return ;
}

Dog::~Dog() {

	std::cout << "Destructor called: Dog (" << this->_type << ")"  << std::endl;
	delete this->_brain;
	return ;
}

void	Dog::makeSound( void ) const {

	std::cout << "Woaf" << std::endl;
	return ;
}

void	Dog::sayIdea( void ) const {

	std::cout << this->_brain->getRandomIdea() << std::endl;
	return ;
}

Dog & Dog::operator=( Dog const & rhs ) {

	std::cout << "Copy assignement operator called: Dog (" << rhs._type << ")"  << std::endl;
	Animal::operator=( rhs );
	this->_brain = new Brain(*rhs._brain);
	return *this;
}
