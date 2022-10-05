/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 22:16:29 by gborne            #+#    #+#             */
/*   Updated: 2022/09/13 02:08:54 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void )
	: AForm("ShrubberyCreation", 145, 137), _target("Default") {

	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
	: AForm("ShrubberyCreation", 145, 137), _target(target) {

	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src )
	:	AForm(src), _target(src._target) {

	return ;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs ) {

	AForm::operator=( rhs );
	this->_target = rhs._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {

	return ;
}

void	executeShrubberyCreation( std::string target ) {

	std::ofstream	ofs((target + "_shrubbery").c_str());
	ofs << "  __   " << std::endl;
	ofs << " /   \\ " << std::endl;
	ofs << " |   | " << std::endl;
	ofs << " \\   / " << std::endl;
	ofs << "  | |  " << std::endl;
	ofs.close();
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {

	if ( this->isSigned() && this->getGradeExec() > executor.getGrade() )
		executeShrubberyCreation( this->_target );
	else
		throw AForm::InvalidExecutionException();
	return ;
}
