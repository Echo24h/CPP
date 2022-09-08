/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 10:43:32 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 11:37:54 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap( ) {
	std::cout << "Constructor called: ScavTrap (NoName)" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {

	std::cout << "Constructor called: ScavTrap (" << name << ")" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap( src ) {

	std::cout << "Copy constructor called: ScavTrap (" << src._name << ")" << std::endl;

	return ;
}

ScavTrap::~ScavTrap() {

	std::cout << "Destructor called: ScavTrap (" << this->_name << ")" << std::endl;
	return ;
}

void	ScavTrap::attack( const std::string & target ) {
	if ( this->_hitPoints <= 0 )
		std::cout << "ScavTrap (" << this->_name << ") can't work underground.." << std::endl;
	else {
		if ( this->_energyPoints <= 0 )
			std::cout << "ScavTrap (" << this->_name << ") has no energy" << std::endl;
		else {
			this->_energyPoints--;
			std::cout << "ScavTrap (" << this->_name << ") attacks (" << target << "), causing " << this->_attackDamage << " points of damage!" << std::endl;
		}
	}
	return ;
}

void ScavTrap::guardGuate( void )
{
	std::cout << "ScavTrap (" << this->_name << ") start the Gate keeper mode!" << std::endl;
	return ;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs ) {

	std::cout << "Copy assignment operator called" << std::endl;
	ClapTrap::operator=( rhs );
	return (*this);
}
