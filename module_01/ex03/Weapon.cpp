/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:00:14 by gborne            #+#    #+#             */
/*   Updated: 2022/05/29 18:13:28 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ){
	return;
}

Weapon::~Weapon( void ){
	return;
}

std::string& Weapon::getType( void ) {
	std::string &typeRef = this->_type;
	return typeRef;
}

void	Weapon::setType( std::string type ) {
	this->_type = type;
	return;
}
