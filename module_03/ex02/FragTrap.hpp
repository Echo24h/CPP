/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:08:09 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 11:38:00 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const & src );
	~FragTrap();

	void	attack( const std::string & target );
	void	highFivesGuys( void );

	FragTrap &	operator=( FragTrap const & rhs );
};

#endif
