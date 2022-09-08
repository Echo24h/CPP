/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:51:36 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 22:44:02 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

public:

	Animal( void );
	Animal( std::string type );
	Animal( Animal const & src );

	Animal &		operator=( Animal const & rhs );

	virtual	~Animal();

	virtual void	makeSound( void ) const;
	virtual void	sayIdea( void ) const;
	std::string		getType( void ) const;

protected:

	std::string	_type;
};

#endif
