/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Editor.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:19:45 by gborne            #+#    #+#             */
/*   Updated: 2022/08/07 20:49:39 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Editor.hpp"

Editor::Editor( std::string const ifname, std::string const s1, std::string const s2 )
		: _ifname(ifname), _s1(s1), _s2(s2) {
	return ;
}

Editor::~Editor( void ) {
	return ;
}

std::string	getReplace( std::string str, std::string const s1, std::string const s2 ) {

	size_t	pos = str.find(s1, 0);

	while ((int)pos != -1 && s1.compare(s2) != 0)
	{
		str.erase(pos, s1.length());
		str.insert(pos, s2);
		pos = str.find(s1, pos);
	}
	return (str);
}

bool	editorError( std::ifstream const &ifs, std::string const s1, std::string const s2 ) {

	if (ifs.fail())
	{
		std::cerr << "Editor error : Wrong filename" << std::endl;
		return (true);
	}
	else if (s1.length() < 1 || s2.length() < 1)
	{
		std::cerr << "Editor error : Wrong s1 or s2 length" << std::endl;
		return (true);
	}
	return (false);
}

void	Editor::createReplaceFile( void ) const {

	std::string		str;
	std::ifstream	ifs(this->_ifname.c_str());

	if (editorError(ifs, this->_s1, this->_s2))
		return ;

	std::ofstream	ofs((this->_ifname + ".replace").c_str());

	while (std::getline(ifs, str))
		ofs << getReplace(str, this->_s1, this->_s2) << std::endl;

	ifs.close();
	ofs.close();
	std::cout << this->_ifname + ".replace is created !" << std::endl;
	return ;
}
