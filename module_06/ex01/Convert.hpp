/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:10:37 by gborne            #+#    #+#             */
/*   Updated: 2022/09/25 14:57:36 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cstdlib>
# include <cmath>

class Convert {

public:

	Convert( void );
	Convert( char * literal );
	Convert( Convert const & src );

	Convert &	operator=( Convert const & rhs );

	~Convert( void );

	char		getChar( void ) const;
	int			getInt( void ) const;
	float		getFloat( void ) const;
	double		getDouble( void ) const;

	class ArgumentException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class ImpossibleException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class NonDisplayableException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

private:

	double	_double;

};


//std::ostream &	operator<<( std::ostream & o, Convert const & rhs );


#endif
