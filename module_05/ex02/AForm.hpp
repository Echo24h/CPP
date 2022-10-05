/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:09:55 by gborne            #+#    #+#             */
/*   Updated: 2022/09/13 01:17:14 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

class AForm;
# include "Bureaucrat.hpp"

class AForm {

public:

	AForm( void );
	AForm( std::string name, int grade_sign, int grade_exec );
	AForm( AForm const & src );

	AForm &		operator=( AForm const & rhs );

	virtual		~AForm();

	virtual void	execute(Bureaucrat const & executor) const = 0;

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

	class InvalidExecutionException : public std::exception {
		public:
			virtual const char*	what() const throw();
	};

private:

	std::string const	_name;
	bool				_signed;
	int const			_grade_sign;
	int const			_grade_exec;

};


std::ostream & operator<<( std::ostream & o, AForm const & rhs );


#endif
