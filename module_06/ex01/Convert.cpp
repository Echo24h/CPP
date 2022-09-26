/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:03:57 by gborne            #+#    #+#             */
/*   Updated: 2022/09/25 15:14:16 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert( void ) : _double(0) {
	return ;
}

Convert::Convert( char * literal ) {

	std::string	pseudos[8] = { "inff", "-inff", "+inff", "nanf", "inf", "-inf", "+inf", "nan" };
	int			literal_size = std::string(literal).size();


	if (literal_size == 1 && !isdigit(int(literal[0]))) {
		this->_double = double(literal[0]);
		return ;
	}
	if (literal_size > 1
	&& std::isprint(literal[0])) {
		for (int i = 0; i < int(sizeof(pseudos)/sizeof(*pseudos)); i++) {
			if (std::string(literal) == pseudos[i]) {
				this->_double = atof(literal);
				return ;
			}
		}
		for (int i = 0; i < literal_size; i++) {
			if ((i == 0 && (literal[i] == '-' || literal[i] == '+'))
				|| literal[i] == '.')
				i++;
			else if (!isdigit(int(literal[i]))
				&& (literal[i] != 'f' && i != literal_size))
				throw Convert::ArgumentException();
		}
	}
	this->_double = atof(literal);
	return ;
}

Convert::Convert( Convert const & src ) {
	*this = src;
	return ;
}

Convert &	Convert::operator=( Convert const & rhs ) {
	this->_double = rhs._double;
	return *this;
}

Convert::~Convert( void ) {
	return ;
}

char	Convert::getChar( void ) const {

	if (!std::isprint(static_cast<char>(roundf(this->_double)))) {
		if (this->_double >= 0 && this->_double <= 127)
			throw Convert::NonDisplayableException();
		else
			throw Convert::ImpossibleException();
	}
	return static_cast<char>(roundf(this->_double));
}

int		Convert::getInt( void ) const {

	if (std::isnan(this->_double) || std::isinf(this->_double))
		throw Convert::ImpossibleException();
	return static_cast<int>(roundf(this->_double));
}

float	Convert::getFloat( void ) const {

	return static_cast<float>(this->_double);
}

double	Convert::getDouble( void ) const {

	return this->_double;
}

const char* Convert::ArgumentException::what() const throw() {
	return ("Wrong argument");
}

const char* Convert::NonDisplayableException::what() const throw() {
	return ("Non displayable");
}

const char* Convert::ImpossibleException::what() const throw() {
	return ("impossible");
}

/*std::ostream & operator<<( std::ostream & o, Convert const & rhs ) {
	o << "char: " << rhs.getChar() << std::endl;
	o << "int: " << rhs.getInt() << std::endl;
	o << "float: " << rhs.getFloat() << std::endl;
	o << "double: " << rhs.getDouble();
	return o;
}*/
