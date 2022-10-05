/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:38:03 by gborne            #+#    #+#             */
/*   Updated: 2022/09/13 01:38:04 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <cstring>
//# include <exception>
class Bureaucrat;
# include "AForm.hpp"

class Bureaucrat {

public:

	Bureaucrat( void );
	Bureaucrat( std::string name, int grade );
	Bureaucrat( Bureaucrat const & src );

	Bureaucrat &		operator=( Bureaucrat const & rhs );

	~Bureaucrat();

	std::string const	getName( void ) const;
	int					getGrade( void ) const;

	void				upGrade( void );
	void				downGrade();

	void				signForm( AForm & src ) const;

	void				executeForm(AForm const & form);

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class InvalidExecutionException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

private:

	std::string const	_name;
	int					_grade;

};


std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);


#endif
