/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Editor.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:20:12 by gborne            #+#    #+#             */
/*   Updated: 2022/08/07 19:39:57 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EDITOR_HPP
# define EDITOR_HPP

# include <iostream>
# include <fstream>

class Editor {

public:

	Editor( std::string const ifname, std::string const s1, std::string const s2 );
	~Editor( void );

	void	createReplaceFile( void ) const;

private:

	std::string const	_ifname;
	std::string const	_s1;
	std::string const	_s2;
};

#endif

