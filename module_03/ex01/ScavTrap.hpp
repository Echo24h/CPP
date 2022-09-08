/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:08:09 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 18:18:07 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & src );
	~ScavTrap();

	void	attack( const std::string & target );
	void	guardGuate( void );

	ScavTrap &	operator=( ScavTrap const & rhs );

};

#endif
