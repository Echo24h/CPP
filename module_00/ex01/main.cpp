/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:53:32 by gborne            #+#    #+#             */
/*   Updated: 2022/05/27 15:54:17 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	main(void)
{

	PhoneBook	phoneBook;
	std::string	str;

	while(std::getline(std::cin, str))
	{
		if (str.compare("EXIT") == 0)
			return 0;
		else if (str.compare("ADD") == 0)
			phoneBook.add();
		else if (str.compare("SHEARCH") == 0)
			phoneBook.shearch();
	}
	return 0;
}
