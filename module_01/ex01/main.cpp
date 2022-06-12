/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:47:49 by gborne            #+#    #+#             */
/*   Updated: 2022/05/29 16:07:58 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{

	int N = 4;
	Zombie *horde = zombieHorde(N, "");
	if (!horde)
		std::cout << "Error\nWrong number of Zombie\n";
	for(int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
