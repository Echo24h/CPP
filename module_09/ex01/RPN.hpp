/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:14:28 by gborne            #+#    #+#             */
/*   Updated: 2023/03/17 14:00:04 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <sstream>
# include <cstdlib>
# include <stack>

class RPN
{
	public:

		RPN( void );

		RPN( const std::string & line );

		~RPN();

		void	calculate( const std::string & line );

	private:

		std::stack<int>	_stack;
};
