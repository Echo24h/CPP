/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:49:19 by gborne            #+#    #+#             */
/*   Updated: 2022/08/03 17:47:33 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

public:

	HumanB( std::string const name );
	~HumanB( void );

	void	attack( void ) const;
	void	setWeapon( Weapon &weapon );

private:

	std::string	const _name;
	Weapon		*_weapon;
};

#endif
