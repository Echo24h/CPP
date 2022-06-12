/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:49:36 by gborne            #+#    #+#             */
/*   Updated: 2022/05/29 15:58:05 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string> //std::string

class Zombie {

	public:

		Zombie( void );
		~Zombie( void );

		void	announce( void ) const;
		void	setName( std::string name );

	private:

		std::string _name;
};

Zombie*	zombieHorde( int N, std::string name );

#endif
