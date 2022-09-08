/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:09:12 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 23:06:13 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" ), _brain( new Brain() ) {

	std::cout << "Défault constructor called: Cat (" << this->_type << ")"  << std::endl;
	return ;
}

Cat::Cat( Cat const & src ) : Animal( src ), _brain( new Brain( *src._brain ) )  {

	std::cout << "Copy constructor called: Cat (" << src._type << ")" << std::endl;
	return ;
}

Cat::~Cat( void ) {

	std::cout << "Destructor called: Cat (" << this->_type << ")"  << std::endl;
	delete this->_brain;
	return ;
}

void	Cat::makeSound( void ) const {

	std::cout << "Miaou" << std::endl;
	return;
}

void	Cat::sayIdea( void ) const {

	std::cout << this->_brain->getRandomIdea() << std::endl;
	return ;
}

Cat &	Cat::operator=( Cat const & rhs ) {

	std::cout << "Copy assignement operator called: Cat (" << rhs._type << ")"  << std::endl;
	Animal::operator=( rhs );
	this->_brain = new Brain( *rhs._brain );
	return *this;
}
