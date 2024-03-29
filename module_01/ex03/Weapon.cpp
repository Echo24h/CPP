/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:00:14 by gborne            #+#    #+#             */
/*   Updated: 2022/08/03 15:39:23 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string const type ){
	this->_type = type;
	return;
}

Weapon::~Weapon( void ){
	return;
}

std::string &Weapon::getType( void ) {
	std::string &typeRef = this->_type;
	return typeRef;
}

void	Weapon::setType( std::string type ) {
	this->_type = type;
	return;
}
