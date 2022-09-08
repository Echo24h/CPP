/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:06:54 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 21:47:46 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

public:

	Cat( void );
	Cat( Cat const & src );

	Cat &			operator=( Cat const & rhs );

	~Cat();

	void	makeSound( void ) const;
};

#endif
