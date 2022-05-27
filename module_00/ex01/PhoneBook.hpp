/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:34:37 by gborne            #+#    #+#             */
/*   Updated: 2022/05/27 16:05:43 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <string> //std::string
#include <sstream> // std::stringstream
#include "Contact.hpp"

class PhoneBook {

public:

	Contact	contact[8];

	PhoneBook(void);
	~PhoneBook(void);

	void	add(void);
	void	shearch(void) const;

private:

	int		nbContact;

	void		_delOld(void);
	std::string	_format(std::string str) const;
};

#endif
