/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 02:42:53 by gborne            #+#    #+#             */
/*   Updated: 2022/09/15 13:06:38 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {

public:

	Intern( void );
	Intern( Intern const & src );

	Intern &	operator=( Intern const & rhs );

	~Intern();

	AForm *		makeRobotomyRequest( std::string target );
	AForm *		makeShrubberyCreation( std::string target );
	AForm *		makePresidentialPardon( std::string target );

	AForm *		makeForm( std::string name, std::string target );

	class NonExistentFormException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

};

#endif
