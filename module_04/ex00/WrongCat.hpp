/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:06:54 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 21:08:52 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

	WrongCat( void );
	WrongCat( WrongCat const & src );

	WrongCat &			operator=( WrongCat const & rhs );

	~WrongCat();

	void	makeSound( void ) const;
};

#endif
