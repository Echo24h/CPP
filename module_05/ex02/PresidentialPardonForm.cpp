/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 22:16:29 by gborne            #+#    #+#             */
/*   Updated: 2022/09/13 01:33:47 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
	: AForm("ShrubberyCreation", 72, 45), _target("Default") {

	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target )
	: AForm("ShrubberyCreation", 72, 45), _target(target) {

	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src )
	:	AForm(src), _target(src._target) {

	return ;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {

	AForm::operator=( rhs );
	this->_target = rhs._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {

	return ;
}

void	executePresidentialPardon( std::string target ) {

	std::cout << target << " has been forgiven by Zaphod Beeblebrox." << std::endl;
	return ;
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const {

	if ( this->isSigned() && this->getGradeExec() > executor.getGrade() )
		executePresidentialPardon( this->_target );
	else
		throw AForm::InvalidExecutionException();
	return ;
}
