/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:06:54 by gborne            #+#    #+#             */
/*   Updated: 2022/09/05 17:58:57 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {

public:

	Cat( void );
	Cat( Cat const & src );

	Cat &			operator=( Cat const & rhs );

	~Cat();

	void	makeSound( void ) const;
	void	sayIdea( void ) const;

private:

	Brain	*_brain;

};

#endif
