/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 10:43:32 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 11:38:04 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap( ) {
	std::cout << "Constructor called: FragTrap (NoName)" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name ) {

	std::cout << "Constructor called: FragTrap (" << name << ")" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap( src ) {

	std::cout << "Copy constructor called: FragTrap (" << src._name << ")" << std::endl;

	return ;
}

FragTrap::~FragTrap() {

	std::cout << "Destructor called: FragTrap (" << this->_name << ")" << std::endl;
	return ;
}

void	FragTrap::attack( const std::string & target ) {
	if ( this->_hitPoints <= 0 )
		std::cout << "FragTrap (" << this->_name << ") can't work underground.." << std::endl;
	else {
		if ( this->_energyPoints <= 0 )
			std::cout << "FragTrap (" << this->_name << ") has no energy" << std::endl;
		else {
			this->_energyPoints--;
			std::cout << "FragTrap (" << this->_name << ") attacks (" << target << "), causing " << this->_attackDamage << " points of damage!" << std::endl;
		}
	}
	return ;
}

void FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap (" << this->_name << ") asks high Fives Guys!" << std::endl;
	return ;
}

FragTrap &	FragTrap::operator=( FragTrap const & rhs ) {

	std::cout << "Copy assignment operator called" << std::endl;
	ClapTrap::operator=( rhs );
	return (*this);
}
