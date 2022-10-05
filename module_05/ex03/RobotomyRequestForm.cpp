/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 22:16:29 by gborne            #+#    #+#             */
/*   Updated: 2022/09/13 01:33:47 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
	: AForm("ShrubberyCreation", 72, 45), _target("Default") {

	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target )
	: AForm("ShrubberyCreation", 72, 45), _target(target) {

	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src )
	:	AForm(src), _target(src._target) {

	return ;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ) {

	AForm::operator=( rhs );
	this->_target = rhs._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {

	return ;
}

void	executeRobotomyRequest( std::string target ) {

	srand(time(NULL));
	int	n = rand() % 100;

	if (n >= 50) {
		std::cout << "Clac Clac Clac .. ";
		std::cout <<  target << " has been robotized." << std::endl;
	} else {
		std::cout << target << " operation failed." << std::endl;
	}
	return ;
}

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const {

	if ( this->isSigned() && this->getGradeExec() > executor.getGrade() )
		executeRobotomyRequest( this->_target );
	else
		throw AForm::InvalidExecutionException();
	return ;
}
