/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:09:55 by gborne            #+#    #+#             */
/*   Updated: 2022/09/12 21:26:16 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Form;
# include "Bureaucrat.hpp"

class Form {

public:

	Form( void );
	Form( std::string name, int grade_sign, int grade_exec );
	Form( Form const & src );

	Form &		operator=( Form const & rhs );

	~Form();

	void		beSigned( Bureaucrat const & src );

	std::string	getName( void ) const;
	bool		isSigned( void ) const;
	int			getGradeSign( void ) const;
	int			getGradeExec( void ) const;

	class GradeTooHighException : public std::exception {
		public:
			virtual const char*	what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char*	what() const throw();
	};

private:

	std::string const	_name;
	bool				_signed;
	int const			_grade_sign;
	int const			_grade_exec;

};

std::ostream & operator<<( std::ostream & o, Form const & rhs );

#endif
