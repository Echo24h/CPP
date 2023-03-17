/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:19:15 by gborne            #+#    #+#             */
/*   Updated: 2023/03/17 17:28:54 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {

	if (argc < 2) {
		std::cerr << "Error: empty operation." << std::endl;
		return 1;
	}
	try {
		PmergeMe pmergeme;
		pmergeme.calculate(argc, argv);
	}
	catch( const std::exception & e ) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}
