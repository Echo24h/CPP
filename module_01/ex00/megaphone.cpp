/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:53:32 by gborne            #+#    #+#             */
/*   Updated: 2022/05/19 20:05:46 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i = 0;

	if (ac <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[++i])
		{
			int	o = -1;

			if (i > 1)
				std::cout << " ";
			while (av[i][++o])
				std::cout << (char)toupper((int)av[i][o]);
		}
		std::cout << std::endl;
	}
}
