/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 02:42:10 by gborne            #+#    #+#             */
/*   Updated: 2022/09/15 13:15:51 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {
	return ;
}

Intern::Intern( Intern const & src ) {

	*this = src;
	return ;
}

Intern &	Intern::operator=( Intern const & rhs ) {

	(void)rhs;
	return *this;
}

Intern::~Intern( void ) {
	return ;
}

AForm *		Intern::makeRobotomyRequest( std::string target ) {
	return new RobotomyRequestForm( target );
}

AForm *		Intern::makeShrubberyCreation( std::string target ) {
	return new ShrubberyCreationForm( target );
}

AForm *		Intern::makePresidentialPardon( std::string target ) {
	return new PresidentialPardonForm( target );
}

AForm *		Intern::makeForm( std::string name, std::string target ) {

	std::string nameList[3] = {
		"robotomy request",
		"shrubbery creation",
		"presidential pardon"
	};

	AForm *		(Intern::*functPtr[])( std::string target ) = {
		&Intern::makeRobotomyRequest,
		&Intern::makeShrubberyCreation,
		&Intern::makePresidentialPardon
	};

	for (int i = 0; i < int(sizeof(nameList)/sizeof(*nameList)); i++) {
		if (name == nameList[i])
			return (this->*functPtr[i])(target);
	}

	throw Intern::NonExistentFormException();
	return NULL;
}

const char*	Intern::NonExistentFormException::what() const throw() {
	return "Error Intern: This form name doesn't exist";
}
