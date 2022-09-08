/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:51:36 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 21:19:23 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {

public:

	WrongAnimal( void );
	WrongAnimal( std::string type );
	WrongAnimal( WrongAnimal const & src );

	WrongAnimal &	operator=( WrongAnimal const & rhs );

	virtual	~WrongAnimal();

	void			makeSound( void ) const;
	std::string		getType( void ) const;

protected:

	std::string	_type;
};

#endif
