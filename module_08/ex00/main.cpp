/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:26:07 by gborne            #+#    #+#             */
/*   Updated: 2022/10/07 13:40:46 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#define	RED "\033[1;31m"
#define	GREEN "\033[1;32m"
#define	DEF "\033[0m"

int	main( void ) {

	std::list<int>	lst;

	lst.push_back(1);
	lst.push_back(10);
	lst.push_back(100);

	std::cout << GREEN << "OK" << DEF << std::endl;

	try {

		int	result;

		result = *easyfind(lst, 10);
		std::cout << result << std::endl;
		result = *easyfind(lst, 1);
		std::cout << result << std::endl;
		result = *easyfind(lst, 100);
		std::cout << result << std::endl;

	} catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}

	std::cout << RED << "KO" << DEF << std::endl;

	try {

		int	result;

		result = *easyfind(lst, 2);
		std::cout << result << std::endl;

	} catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
