/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:46:56 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 22:43:40 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type( "NoType" ) {

	std::cout << "Défault constructor called: Animal (NoType)" << std::endl;
	return ;
}

Animal::Animal( std::string type ) : _type( type ) {

	std::cout << "Constructor called: Animal (" << type << ")"  << std::endl;
	return ;
}

Animal::Animal( Animal const & src ) {

	std::cout << "Copy constructor called: Animal (" << src._type << ")"  << std::endl;
	*this = src;
	return ;
}

Animal::~Animal() {

	std::cout << "Destructor called: Animal (" << this->_type << ")"  << std::endl;
	return ;
}

std::string	Animal::getType( void ) const {
	return this->_type;
}

void	Animal::makeSound( void ) const {

	std::cout << " .. " << std::endl;
	return;
}

void	Animal::sayIdea( void ) const {
	std::cout << "No idea for Animal class .." << std::endl;
	return ;
}

Animal &	Animal::operator=( Animal const & rhs ) {

	std::cout << "Copy assignement operator called: Animal (" << rhs._type << ")"  << std::endl;
	this->_type = rhs._type;
	return *this;
}
