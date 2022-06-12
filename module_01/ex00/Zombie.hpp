/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:49:36 by gborne            #+#    #+#             */
/*   Updated: 2022/05/29 14:59:16 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string> //std::string

class Zombie {

	public:

	Zombie( std::string name );
	~Zombie(void);

	void	announce(void) const;

	private:

	std::string _name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );


#endif
