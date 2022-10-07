/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:40:46 by gborne            #+#    #+#             */
/*   Updated: 2022/10/07 17:57:47 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

public:

	MutantStack<T>( void ) {
		return ;
	}

	MutantStack<T>( MutantStack<T> const & src ) {
		*this = src;
	}

	MutantStack<T> &	operator=( MutantStack<T> const & rhs ) {
		std::stack<T>::operator=(rhs);
		return *this;
	}

	~MutantStack<T>( void ) {
		return ;
	}

	typedef typename MutantStack<T>::stack::container_type::iterator iterator;

	iterator begin() {
		return this->c.begin();
	}

	iterator end() {
		return this->c.end();
	}
};

#endif
