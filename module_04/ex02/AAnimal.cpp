/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:46:56 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 23:10:46 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : _type( "NoType" ) {

	std::cout << "Défault constructor called: AAnimal (NoType)" << std::endl;
	return ;
}

AAnimal::AAnimal( std::string type ) : _type( type ) {

	std::cout << "Constructor called: AAnimal (" << type << ")"  << std::endl;
	return ;
}

AAnimal::AAnimal( AAnimal const & src ) {

	std::cout << "Copy constructor called: AAnimal (" << src._type << ")"  << std::endl;
	*this = src;
	return ;
}

AAnimal::~AAnimal() {

	std::cout << "Destructor called: AAnimal (" << this->_type << ")"  << std::endl;
	return ;
}

std::string	AAnimal::getType( void ) const {
	return this->_type;
}

void	AAnimal::makeSound( void ) const {

	std::cout << " .. " << std::endl;
	return;
}

void	AAnimal::sayIdea( void ) const {
	std::cout << "No idea for AAnimal class .." << std::endl;
	return ;
}

AAnimal &	AAnimal::operator=( AAnimal const & rhs ) {

	std::cout << "Copy assignement operator called: AAnimal (" << rhs._type << ")"  << std::endl;
	this->_type = rhs._type;
	return *this;
}
