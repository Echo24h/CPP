/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:00:16 by gborne            #+#    #+#             */
/*   Updated: 2022/09/25 15:06:35 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main( int argc, char **argv ) {

	if (argc != 2)
		std::cout << "Wrong arguments. Ex: ./convert \"0\"" << std::endl;
	else {

		try {
			Convert n(argv[1]);

			std::cout << "char: ";
			try {
				char	c = n.getChar();
				std::cout << "'" << c << "'" << std::endl;
			} catch ( std::exception & e ) {
				std::cout << e.what() << std::endl;
			}

			std::cout << "int: ";
			try {
				std::cout << n.getInt() << std::endl;
			} catch ( std::exception & e ) {
				std::cout << e.what() << std::endl;
			}

			std::cout << "float: ";
			try {
				float numb = n.getFloat();

				if (numb == static_cast<int>(numb))
					std::cout << numb << ".0f" << std::endl;
				else
					std::cout << numb << "f" << std::endl;

			} catch ( std::exception & e ) {
				std::cout << e.what() << std::endl;
			}

			std::cout << "double: ";
			try {
				double numb = n.getDouble();

				if (numb == static_cast<int>(numb))
					std::cout << numb << ".0" << std::endl;
				else
					std::cout << numb << std::endl;
			} catch ( std::exception & e ) {
				std::cout << e.what() << std::endl;
			}
		} catch ( std::exception & e ) {
			std::cout << e.what() << std::endl;
		}
	}
}
