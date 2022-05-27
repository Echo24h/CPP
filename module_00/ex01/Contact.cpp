/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:49:18 by gborne            #+#    #+#             */
/*   Updated: 2022/05/27 16:18:38 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) { return; }
Contact::~Contact(void) { return; }

void	Contact::create(
		std::string firstName,
		std::string lastName,
		std::string nickName,
		std::string phoneNumber,
		std::string darkSecret
		)
{
	this->_setFirstName(firstName);
	this->_setLastName(lastName);
	this->_setNickName(nickName);
	this->_setPhoneNumber(phoneNumber);
	this->_setDarkSecret(darkSecret);
	return;
}

void	Contact::show(void) const
{
	std::cout << "first name    : " << this->getFirstName() << std::endl;
	std::cout << "last name     : " << this->getLastName() << std::endl;
	std::cout << "nickname      : " << this->getNickName() << std::endl;
	std::cout << "phone number  : " << this->getPhoneNumber() << std::endl;
	std::cout << "darkest secret: " << this->getDarkSecret() << std::endl;
	return;
}

void	Contact::_setFirstName(std::string str)
{
	this->_firstName = str;
	return;
}

void	Contact::_setLastName(std::string str)
{
	this->_lastName = str;
	return;
}

void	Contact::_setNickName(std::string str)
{
	this->_nickName = str;
	return;
}

void	Contact::_setPhoneNumber(std::string str)
{
	this->_phoneNumber = str;
	return;
}

void	Contact::_setDarkSecret(std::string str)
{
	this->_darkSecret = str;
	return;
}

std::string	Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::getNickName(void) const
{
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkSecret(void) const
{
	return (this->_darkSecret);
}
