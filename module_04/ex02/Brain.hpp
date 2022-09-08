/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:48:28 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 22:37:14 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <cstdlib>

class Brain {

public:

	Brain( void );
	Brain( Brain const & rhs );

	Brain & operator=( Brain const & src );

	~Brain();

	std::string	ideas[100];

	void		fillIdeas( void );
	std::string	getRandomIdea( void ) const;

};

#endif
