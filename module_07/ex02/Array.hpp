/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:27:59 by gborne            #+#    #+#             */
/*   Updated: 2022/10/06 18:18:32 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <iostream>

template< typename T >
class Array {

public:

	Array<T>( void ) : _size(0), _array(NULL) {
		return ;
	}

	Array<T>( int const n ) : _size(n) {
		if (n < 0)
			throw InvalidSizeException();
		else if (n == 0)
			this->_array = NULL;
		else
			this->_array = new T[n];
		return ;
	}

	Array<T>( Array<T> const & src ) {
		*this = src;
		return ;
	}

	Array<T> &	operator=( Array<T> const & rhs ) {
		this->_size = rhs._size;
		if (this->_size > 0) {
			this->_array = new T[rhs._size];
			for (int i = 0; i < this->_size; i++)
				this->_array[i] = rhs._array[i];
		} else {
			this->_array = NULL;
		}
		return *this;
	}

	T &			operator[]( int const index ) const {
		if (this->_size <= 0 || index < 0 || index >= this->_size)
			throw InvalidIndexException();
		return this->_array[index];
	}

	~Array( void ) {
		if (this->_size > 0)
			delete [] this->_array;
		return ;
	}

	int	size( void ) const {
		return this->_size;
	}

	class InvalidIndexException : public std::exception {
		public:
			virtual const char * what() const throw() {
				return "Invalid index exception";
			}
	};

	class InvalidSizeException : public std::exception {
		public:
			virtual const char * what() const throw() {
				return "Invalid size exception";
			}
	};

private:

	int const	_size;
	T *			_array;

};

#endif
