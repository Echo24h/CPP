/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:59:28 by gborne            #+#    #+#             */
/*   Updated: 2023/03/17 13:16:59 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) {

	if (argc != 2) {
		std::cerr << "Error: empty operation." << std::endl;
		return 1;
	}
	try {
		RPN rpn;
		rpn.calculate(argv[1]);
	}
	catch( const std::exception & e ) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}

