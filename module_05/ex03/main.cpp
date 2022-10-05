/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 23:19:11 by gborne            #+#    #+#             */
/*   Updated: 2022/09/15 13:14:34 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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
		ShrubberyCreationForm form1("Grand jardin");
		test1.signForm(form1);
		std::cout << form1 << std::endl;
		test1.executeForm(form1);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "TEST:3 " << std::endl;

	try {
		Bureaucrat	test1("Pierre", 150);
		ShrubberyCreationForm form1("Grand jardin");
		test1.signForm(form1);
		std::cout << form1 << std::endl;
		test1.executeForm(form1);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "TEST:4 " << std::endl;

	try {
		Bureaucrat	test1("Pierre", 140);
		ShrubberyCreationForm form1("Grand jardin");
		std::cout << test1 << std::endl;
		form1.beSigned(test1);
		std::cout << form1 << std::endl;
		test1.executeForm(form1);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "TEST:5 " << std::endl;

	try {
		Bureaucrat	test1("Pierre", 140);
		ShrubberyCreationForm form1("Grand jardin");
		std::cout << test1 << std::endl;
		form1.beSigned(test1);
		std::cout << form1 << std::endl;
		form1.execute(test1);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "TEST:6 " << std::endl;

	try {
		Bureaucrat	test1("Pierre", 130);
		ShrubberyCreationForm form3("Grand jardin2");
		ShrubberyCreationForm form2 = form3;
		ShrubberyCreationForm form1(form2);
		std::cout << test1 << std::endl;
		form1.beSigned(test1);
		std::cout << form1 << std::endl;
		form1.execute(test1);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "TEST:7 " << std::endl;

	try {
		Bureaucrat	test1("Pierre", 1);
		RobotomyRequestForm form3("The OP");
		RobotomyRequestForm form2 = form3;
		RobotomyRequestForm form1(form2);
		std::cout << test1 << std::endl;
		form1.beSigned(test1);
		std::cout << form1 << std::endl;
		form1.execute(test1);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "TEST:8 " << std::endl;

	try {
		Bureaucrat	test1("Pierre", 1);
		PresidentialPardonForm form3("The OP");
		PresidentialPardonForm form2 = form3;
		PresidentialPardonForm form1(form2);
		std::cout << test1 << std::endl;
		form1.beSigned(test1);
		std::cout << form1 << std::endl;
		form1.execute(test1);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "TEST:9 " << std::endl;

	try {
		Bureaucrat	test1("Pierre", 1);
		Intern tom;
		AForm *formPtr = tom.makeForm("presidential pardon", "test");
		std::cout << *formPtr << std::endl;
		formPtr->beSigned(test1);
		std::cout << *formPtr << std::endl;
		formPtr->execute(test1);
		delete formPtr;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "TEST:10 " << std::endl;

	try {
		Bureaucrat	test1("Pierre", 1);
		Intern tom;
		AForm *formPtr = tom.makeForm("presidential test", "test");
		std::cout << *formPtr << std::endl;
		formPtr->beSigned(test1);
		std::cout << *formPtr << std::endl;
		formPtr->execute(test1);
		delete formPtr;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
