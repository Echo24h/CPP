/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:38:31 by gborne            #+#    #+#             */
/*   Updated: 2022/09/13 01:40:18 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("Default"), _grade(150) {
	return ;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name) {
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) : _name(src.getName()) {
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat( void ) {
	return ;
}

std::string const	Bureaucrat::getName( void ) const {
	return this->_name;
}

int					Bureaucrat::getGrade( void ) const {
	return this->_grade;
}

void				Bureaucrat::upGrade( void ) {
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
	return ;
}

void				Bureaucrat::downGrade( void ) {
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
	return ;
}

void				Bureaucrat::signForm( AForm & src ) const {
	if (this->_grade > src.getGradeExec())
		std::cout << *this << " couldn’t sign " << src << " because he does not have execution grade." << std::endl;
	else if (this->_grade > src.getGradeSign())
		std::cout << *this << " couldn’t sign " << src << " because he does not have the sign grade." << std::endl;
	else {
		std::cout << *this << " signed " << src << std::endl;
		src.beSigned(*this);
	}
	return ;
}

void				Bureaucrat::executeForm(AForm const & form) {
	if (!form.isSigned() ||  form.getGradeExec() < this->getGrade())
		throw Bureaucrat::InvalidExecutionException();
	else
	{
		form.execute( *this );
		std::cout << *this << " executed " << form << std::endl;
	}
	return ;
}

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & src ) {
	this->_grade = src.getGrade();
	return *this;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Error Bureaucrat: Grade too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Error Bureaucrat: Grade too low");
}

const char*	Bureaucrat::InvalidExecutionException::what() const throw() {
	return ("Error Bureaucrat: Invalid condition for execution");
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs ) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}
