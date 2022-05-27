/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:51:58 by gborne            #+#    #+#             */
/*   Updated: 2022/05/27 16:22:56 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->nbContact = 0;
	return;
}
PhoneBook::~PhoneBook(void) { return; }

void	PhoneBook::add(void)
{
	std::string	str[5];

	std::cout << "New contact" <<  std::endl;
	std::cout <<  std::endl;
	std::cout <<  "first name: ";
	std::getline(std::cin, str[0]);
	std::cout <<  "last name: ";
	std::getline(std::cin, str[1]);
	std::cout <<  "nickname: ";
	std::getline(std::cin, str[2]);
	std::cout <<  "phone number: ";
	std::getline(std::cin, str[3]);
	std::cout <<  "darkest secret: ";
	std::getline(std::cin, str[4]);
	std::cout <<  std::endl;
	std::cout << "Contact created !" <<  std::endl;
	if (this->nbContact >= 8)
		this->_delOld();
	this->contact[this->nbContact].create(str[0], str[1], str[2], str[3], str[4]);
	this->nbContact++;
}

void	PhoneBook::shearch(void) const
{
	int	i = -1;
	std::string	str;
	std::stringstream ss;
	int num;

	std::cout << std::setw(10) << this->_format("index") << "|";
	std::cout << std::setw(10) << this->_format("first name") << "|";
	std::cout << std::setw(10) << this->_format("last name") << "|";
	std::cout << std::setw(10) << this->_format("nickname") << std::endl;
	while (++i < this->nbContact)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << this->_format(this->contact[i].getFirstName()) << "|";
		std::cout << std::setw(10) << this->_format(this->contact[i].getLastName()) << "|";
		std::cout << std::setw(10) << this->_format(this->contact[i].getNickName()) << std::endl;
	}
	std::cout <<  "Show index: ";
	std::getline(std::cin, str);
	ss << str;
  	ss >> num;
	if (num >= 1 && num <= nbContact)
		this->contact[num - 1].show();
	else
		std::cout <<  "Error" << std::endl << "Insert an index between 1 and " << nbContact << "." << std::endl;
}

void	PhoneBook::_delOld(void)
{
	int		i = -1;

	while (++i < this->nbContact - 1)
	{
		this->contact[i] = this->contact[i + 1];
	}
	this->nbContact--;
}

std::string	PhoneBook::_format(std::string str) const
{
	std::string	newStr = str;

	if (newStr.length() > 10)
	{
		newStr.resize(9);
		newStr.insert(9, 1, '.');
	}
	return newStr;
}
