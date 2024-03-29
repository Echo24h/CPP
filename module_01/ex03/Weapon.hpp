/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:00:24 by gborne            #+#    #+#             */
/*   Updated: 2022/08/03 16:15:01 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {

public:

	Weapon( std::string const type );
	~Weapon( void );

	std::string	&getType( void );
	void		setType( std::string  const type );

private:

	std::string	_type;
};

#endif
