/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:30:58 by gborne            #+#    #+#             */
/*   Updated: 2022/09/03 01:50:37 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

public:

	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( ClapTrap const & src );
	~ClapTrap();

	void	attack( const std::string & target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

	ClapTrap &	operator=( ClapTrap const & rhs );

private:

	std::string		_name;
	int				_hitPoints;
	int				_energyPoints;
	int				_attackDamage;

};

#endif
