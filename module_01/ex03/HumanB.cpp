/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:00:14 by gborne            #+#    #+#             */
/*   Updated: 2022/08/03 17:57:38 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string const name) : _name(name) {
	this->_weapon = NULL;
	return;
}

HumanB::~HumanB( void ) {
	return;
}

void	HumanB::attack( void ) const {
	std::cout << this->_name << " attacks with ther ";
	if (this->_weapon)
		std::cout << this->_weapon->getType();
	else
		std::cout << ".. hand (no weapon)";
	std::cout << std::endl;
	return;
}

void	HumanB::setWeapon( Weapon &weapon ) {
	this->_weapon = &weapon;
	return ;
}
