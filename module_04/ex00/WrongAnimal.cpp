/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal .cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:46:56 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 21:13:31 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type( "WrongNoType" ) {

	std::cout << "Défault constructor called: WrongAnimal (WrongNoType)" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( std::string type ) : _type( type ) {

	std::cout << "Constructor called: WrongAnimal (" << type << ")"  << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src ) {

	std::cout << "Copy constructor called: WrongAnimal (" << src._type << ")"  << std::endl;
	*this = src;
	return ;
}

WrongAnimal::~WrongAnimal() {

	std::cout << "Destructor called: WrongAnimal (" << this->_type << ")"  << std::endl;
	return ;
}

std::string	WrongAnimal::getType( void ) const {
	return this->_type;
}

void	WrongAnimal::makeSound( void ) const {

	std::cout << "..." << std::endl;
	return;
}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs ) {

	std::cout << "Copy assignement operator called: WrongAnimal (" << rhs._type << ")"  << std::endl;
	this->_type = rhs._type;
	return *this;
}
