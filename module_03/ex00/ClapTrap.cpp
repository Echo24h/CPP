/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:37:33 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 11:21:58 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
	: _name("NoName"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

	std::cout << "Constructor called: ClapTrap (NoName)" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name )
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

	std::cout << "Constructor called: ClapTrap (" << name << ")" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const & src ) {

	std::cout << "Copy constructor called: ClapTrap (" << src._name << ")" << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap() {

	std::cout << "Destructor called: ClapTrap (" << this->_name << ")" << std::endl;
	return ;
}

void	ClapTrap::attack( const std::string & target ) {
	if ( this->_hitPoints <= 0 )
		std::cout << "ClapTrap (" << this->_name << ") can't work underground.." << std::endl;
	else {
		if ( this->_energyPoints <= 0 )
			std::cout << "ClapTrap (" << this->_name << ") has no energy" << std::endl;
		else {
			this->_energyPoints--;
			std::cout << "ClapTrap (" << this->_name << ") attacks (" << target << "), causing " << this->_attackDamage << " points of damage!" << std::endl;
		}
	}
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	if (  this->_hitPoints <= 0 )
		std::cout << "ClapTrap (" << this->_name << ") is already underground.." << std::endl;
	else {
		this->_hitPoints -= amount;
		std::cout << "ClapTrap (" << this->_name << ") lose " << amount << " hit points" << std::endl;
		if ( this->_hitPoints <= 0 )
			std::cout << "ClapTrap (" << this->_name << ") was killed" << std::endl;
	}
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	if ( this->_hitPoints <= 0 )
		std::cout << "ClapTrap (" << this->_name << ") can't work underground.." << std::endl;
	else {
		if ( this->_energyPoints <= 0 )
			std::cout << "ClapTrap (" << this->_name << ") has no energy" << std::endl;
		else {
			this->_energyPoints--;
			this->_hitPoints += amount;
			std::cout << "ClapTrap (" << this->_name << ") regains " << amount << " hit points" << std::endl;
		}
	}
	return ;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs ) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	this->_hitPoints = rhs._hitPoints;
	return (*this);
}
