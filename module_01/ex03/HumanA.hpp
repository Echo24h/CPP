/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:49:28 by gborne            #+#    #+#             */
/*   Updated: 2022/08/03 16:15:53 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA {

public:

	HumanA( std::string const name, Weapon &weapon );
	~HumanA( void );

	void	attack( void ) const;
	void	setWeapon( Weapon &weapon );

private:

	std::string	const _name;
	Weapon		&_weapon;
};

#endif
