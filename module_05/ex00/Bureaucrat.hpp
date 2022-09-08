/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:38:03 by gborne            #+#    #+#             */
/*   Updated: 2022/09/05 18:39:56 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <cstring>
//# include <exception>

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

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Error\nGrade too high");
			}
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Error\nGrade too low");
			}
	};

private:

	std::string const	_name;
	int					_grade;

};


std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);


#endif
