/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:30:24 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 11:40:46 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void ) {

	ClapTrap test;
	ClapTrap patrick("Patrick");
	test = patrick;
	ClapTrap tom(test);
	tom.attack("pierre");
	tom.attack("pierre");
	tom.attack("pierre");
	tom.attack("pierre");
	tom.attack("pierre");
	tom.attack("pierre");
	tom.attack("pierre");
	tom.attack("pierre");
	tom.takeDamage(9);
	tom.beRepaired(9);
	tom.takeDamage(8);
	tom.attack("pierre");
	tom.beRepaired(10);
	tom.takeDamage(2);
	tom.beRepaired(10);

	std::cout << std::endl;

	ScavTrap test2("TheScav");
	test2.guardGuate();
	test2.takeDamage(10);
	test2.attack("Pierre");

	std::cout << std::endl;

	FragTrap test3("TheFrag");
	test3.highFivesGuys();
	test3.takeDamage(10);
	test3.attack("Pierre");

	std::cout << std::endl;

	return 0;
}
