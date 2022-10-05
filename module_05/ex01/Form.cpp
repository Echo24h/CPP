/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:09:41 by gborne            #+#    #+#             */
/*   Updated: 2022/09/12 22:01:56 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void )
	: _name("Default"), _signed(false), _grade_sign(150), _grade_exec(150) {
	return ;
}

Form::Form( std::string name, int grade_sign, int grade_exec )
	: _name(name), _signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec) {

	if (grade_sign > 150 || grade_exec > 150)
		throw Form::GradeTooLowException();
	else if (grade_sign < 1 || grade_exec < 1)
		throw Form::GradeTooHighException();
	return ;
}

Form::Form( Form const & src )
	: _name(src._name), _grade_sign(src._grade_sign), _grade_exec(src._grade_exec) {
	*this = src;
	return ;
}

Form &	Form::operator=( Form const & rhs ) {
	this->_signed = rhs._signed;
	return *this;
}

Form::~Form( void ) {
	return ;
}

void	Form::beSigned( Bureaucrat const & src ) {
	if (src.getGrade() > this->_grade_sign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
	return ;
}

std::string	Form::getName( void ) const {
	return this->_name;
}

bool		Form::isSigned( void ) const {
	return this->_signed;
}

int			Form::getGradeSign( void ) const {
	return this->_grade_sign;
}

int			Form::getGradeExec( void ) const {
	return this->_grade_exec;
}

const char*	Form::GradeTooHighException::what() const throw() {
	return ("Error Form: Grade too high");
}

const char*	Form::GradeTooLowException::what() const throw() {
	return ("Error Form: Grade too low");
}

std::ostream &	operator<<(std::ostream & o, Form const & rhs ) {
	o << "Form info: Name(" << rhs.getName() << "), ";
	o << "isSigned(" << rhs.isSigned() << "), ";
	o << "GradeExec(" << rhs.getGradeExec() << "), ";
	o << "GradeSign(" << rhs.getGradeSign() << ")";
	return o;
}
