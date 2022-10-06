/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:27:21 by gborne            #+#    #+#             */
/*   Updated: 2022/10/06 18:30:58 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define	RED "\033[1;31m"
#define	GREEN "\033[1;32m"
#define	DEF "\033[0m"

int	main( void ) {

	// SIMPLE TEST

	std::cout << GREEN << "SIMPLE TEST" << DEF << std::endl;
	try {

		int			size = 10;
		Array<int>			numbers(size);
		Array<char>			characters(size);
		Array<std::string>	strings(size);

		for (int i = 0; i < size; i++) {
			numbers[i] = 1;
			characters[i] = 'a';
			strings[i] = "coucou";
		}

		for (int i = 0; i < size; i++)
			std::cout << numbers[i] << "|" << characters[i] << "|" << strings[i] << std::endl;

	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	// ERROR TEST

	std::cout << RED << "ERROR TEST1" << DEF << std::endl;
	try {

		Array<int> numbers(0);

		std::cout << numbers[0] << std::endl;

	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << RED << "ERROR TEST2" << DEF << std::endl;
	try {

		Array<int> numbers;

		std::cout << numbers[0] << std::endl;

	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << RED << "ERROR TEST3" << DEF << std::endl;
	try {

		Array<int> numbers(10);

		for (int i = 0; i < 10; i++) {
			numbers[i] = 1;
		}

		std::cout << numbers[10] << std::endl;

	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << RED << "ERROR TEST4" << DEF << std::endl;
	try {

		Array<int> numbers(10);

		for (int i = 0; i < 10; i++) {
			numbers[i] = 1;
		}

		std::cout << numbers[-1] << std::endl;

	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << RED << "ERROR TEST5" << DEF << std::endl;
	try {

		Array<int> numbers(-1);

		std::cout << numbers[0] << std::endl;

	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
