/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:21:10 by gborne            #+#    #+#             */
/*   Updated: 2023/03/17 18:15:58 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <sstream>
# include <cstdlib>
# include <vector>
# include <list>

class PmergeMe
{
	public:

		PmergeMe( void );

		PmergeMe( int argc, char ** argv );

		~PmergeMe();

        void	calculate( int argc, char ** argv );

	private:

		std::vector<int>	_vector;
        
        std::list<int>      _list;
};
