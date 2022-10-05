/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:09:41 by gborne            #+#    #+#             */
/*   Updated: 2022/09/12 22:01:56 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( void )
	: _name("Default"), _signed(false), _grade_sign(150), _grade_exec(150) {
	return ;
}

AForm::AForm( std::string name, int grade_sign, int grade_exec )
	: _name(name), _signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec) {

	if (grade_sign > 150 || grade_exec > 150)
		throw AForm::GradeTooLowException();
	else if (grade_sign < 1 || grade_exec < 1)
		throw AForm::GradeTooHighException();
	return ;
}

AForm::AForm( AForm const & src )
	: _name(src._name), _grade_sign(src._grade_sign), _grade_exec(src._grade_exec) {
	*this = src;
	return ;
}

AForm &	AForm::operator=( AForm const & rhs ) {
	this->_signed = rhs._signed;

	return *this;
}

AForm::~AForm( void ) {
	return ;
}

void	AForm::beSigned( Bureaucrat const & src ) {
	if (src.getGrade() > this->_grade_sign)
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
	return ;
}

std::string	AForm::getName( void ) const {
	return this->_name;
}

bool		AForm::isSigned( void ) const {
	return this->_signed;
}

int			AForm::getGradeSign( void ) const {
	return this->_grade_sign;
}

int			AForm::getGradeExec( void ) const {
	return this->_grade_exec;
}

const char*	AForm::GradeTooHighException::what() const throw() {
	return ("Error AForm: Grade too high");
}

const char*	AForm::GradeTooLowException::what() const throw() {
	return ("Error AForm: Grade too low");
}

const char*	AForm::InvalidExecutionException::what() const throw() {
	return ("Error AForm: Invalid condition for execution");
}

std::ostream &	operator<<(std::ostream & o, AForm const & rhs ) {
	o << "AForm info: Name(" << rhs.getName() << "), ";
	o << "isSigned(" << rhs.isSigned() << "), ";
	o << "GradeExec(" << rhs.getGradeExec() << "), ";
	o << "GradeSign(" << rhs.getGradeSign() << ")";
	return o;
}
