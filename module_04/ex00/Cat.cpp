/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:09:12 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 21:35:06 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" ) {

	std::cout << "Défault constructor called: Cat (" << this->_type << ")"  << std::endl;
	return ;
}

Cat::Cat( Cat const & src ) : Animal( src ) {

	std::cout << "Copy constructor called: Cat (" << src._type << ")" << std::endl;
	return ;
}

Cat::~Cat( void ) {

	std::cout << "Destructor called: Cat (" << this->_type << ")"  << std::endl;
	return ;
}

void	Cat::makeSound( void ) const {

	std::cout << "Miaou" << std::endl;
	return;
}

Cat &	Cat::operator=( Cat const & rhs ) {

	std::cout << "Copy assignement operator called: Cat (" << rhs._type << ")"  << std::endl;
	Animal::operator=( rhs );
	return *this;
}
