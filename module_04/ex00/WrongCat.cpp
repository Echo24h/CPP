/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:09:12 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 21:10:18 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal( "WrongCat" ) {

	std::cout << "Défault constructor called: WrongCat (" << this->_type << ")"  << std::endl;
	return ;
}

WrongCat::WrongCat( WrongCat const & src ) : WrongAnimal( src ) {

	std::cout << "Copy constructor called: WrongCat (" << src._type << ")" << std::endl;
	return ;
}

WrongCat::~WrongCat( void ) {

	std::cout << "Destructor called: WrongCat (" << this->_type << ")"  << std::endl;
	return ;
}

void	WrongCat::makeSound( void ) const {

	std::cout << "Miaou" << std::endl;
	return;
}

WrongCat &	WrongCat::operator=( WrongCat const & rhs ) {

	std::cout << "Copy assignement operator called: WrongCat (" << rhs._type << ")"  << std::endl;
	WrongAnimal::operator=( rhs );
	return *this;
}
