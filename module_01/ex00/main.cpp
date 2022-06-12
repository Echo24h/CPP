/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:47:49 by gborne            #+#    #+#             */
/*   Updated: 2022/05/29 15:11:09 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie rob("Rob");
	Zombie *pierre = newZombie("Pierre");
	rob.announce();
	pierre->announce();
	randomChump("Foo");
	delete pierre;
	return (0);
}
