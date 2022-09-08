/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 23:19:11 by gborne            #+#    #+#             */
/*   Updated: 2022/09/05 18:39:53 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void ) {

	try
	{
		Bureaucrat test;
		Bureaucrat pierre("Pierre", 1);
		//pierre.upGrade();
		Bureaucrat jerry(test);
		//test.downGrade();
		jerry = test;
		test.upGrade();

		std::cout << test << std::endl;
		std::cout << pierre << std::endl;
		std::cout << jerry << std::endl;

		std::cout << std::endl;

		//pierre.upGrade();
		Bureaucrat test2("Pierre", 151);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
