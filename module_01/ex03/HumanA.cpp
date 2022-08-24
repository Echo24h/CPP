/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:00:14 by gborne            #+#    #+#             */
/*   Updated: 2022/08/03 15:55:37 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string const name, Weapon &weapon )
	: _name(name), _weapon(weapon) {
	return;
}

HumanA::~HumanA( void ) {
	return;
}

void	HumanA::attack( void ) const {
	std::cout << this->_name << " attacks with ther " << this->_weapon.getType() << std::endl;
	return;
}

void	HumanA::setWeapon( Weapon &weapon ) {
	this->_weapon = weapon;
	return ;
}
