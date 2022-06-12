/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:00:24 by gborne            #+#    #+#             */
/*   Updated: 2022/05/29 18:12:03 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Weapon {

public:

	Weapon( void );
	~Weapon( void );

	std::string	&getType( void );
	void		setType( std::string type );

private:

	std::string	_type;
};
