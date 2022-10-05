/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 23:19:11 by gborne            #+#    #+#             */
/*   Updated: 2022/09/12 22:05:21 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void ) {

	std::cout << "TEST:1 " << std::endl;

	try {
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

		//pierre.upGrade();
		Bureaucrat test2("Pierre", 151);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "TEST:2 " << std::endl;

	try {
		Bureaucrat	test1("Pierre", 1);
		Form		form1("Form1", 150, 150);
		test1.signForm(form1);
		std::cout << form1 << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "TEST:3 " << std::endl;

	try {
		Bureaucrat	test1("Pierre", 100);
		Form		form1("Form1", 50, 150);
		test1.signForm(form1);
		std::cout << form1 << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "TEST:4 " << std::endl;

	try {
		Bureaucrat	test1("Pierre", 100);
		Form		form1("Form1", 150, 50);
		test1.signForm(form1);
		std::cout << form1 << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "TEST:5 " << std::endl;

	try {
		Bureaucrat	test1("Pierre", 100);
		Form		form1("Form1", 50, 150);
		test1.signForm(form1);
		std::cout << form1 << std::endl;
		form1.beSigned(test1);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "TEST:6 " << std::endl;

	try {
		Bureaucrat	test1("Pierre", 100);
		Form		form1("Form1", 50, 150);
		test1.signForm(form1);
		std::cout << form1 << std::endl;
		form1.beSigned(test1);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "TEST:7 " << std::endl;

	try {
		Bureaucrat	test1("Pierre", 100);
		Form		form1("Form1", 0, 150);
		test1.signForm(form1);
		std::cout << form1 << std::endl;
		form1.beSigned(test1);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
