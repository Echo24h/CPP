/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:34:31 by gborne            #+#    #+#             */
/*   Updated: 2022/05/29 13:59:05 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string> //std::string
#include <sstream> // std::stringstream

class Contact {

public:

	Contact(void);
	~Contact(void);

	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickName(void) const;
	std::string	getPhoneNumber(void) const;
	std::string	getDarkSecret(void) const;

	void		create(
		std::string firstName,
		std::string lastName,
		std::string nickName,
		std::string phoneNumber,
		std::string darkSecret
		);

	void show(void) const;

private:

	void		_setFirstName(std::string);
	void		_setLastName(std::string);
	void		_setNickName(std::string);
	void		_setPhoneNumber(std::string);
	void		_setDarkSecret(std::string);

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkSecret;
};

#endif
