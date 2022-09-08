/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:30:24 by gborne            #+#    #+#             */
/*   Updated: 2022/09/03 01:51:25 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
	return 0;
}
