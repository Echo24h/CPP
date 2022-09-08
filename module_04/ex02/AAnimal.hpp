/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:51:36 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 23:09:57 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class AAnimal {

public:

	AAnimal( void );
	AAnimal( std::string type );
	AAnimal( AAnimal const & src );

	AAnimal &		operator=( AAnimal const & rhs );

	virtual	~AAnimal();

	virtual void	makeSound( void ) const = 0;
	virtual void	sayIdea( void ) const;
	std::string		getType( void ) const;

protected:

	std::string	_type;
};

#endif
