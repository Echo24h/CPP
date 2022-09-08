/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:48:19 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 22:37:54 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {

	std::cout << "Constructor called: Brain" << std::endl;
	this->fillIdeas();
	return ;
}

Brain::Brain( Brain const & rhs ) {

	std::cout << "Copy constructor called: Brain" << std::endl;
	*this = rhs;
	return ;
}

Brain &	Brain::operator=( Brain const & src ) {

	std::cout << "Assignement operation called: Brain" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return *this;
}

Brain::~Brain() {

	std::cout << "Destructor called: Brain" << std::endl;
	return ;
}

void	Brain::fillIdeas( void ) {

	int iIdeas = 0;
	std::string randomIdeas[5] = {
		"I love croquette",
		"Where is croquette?",
		"I want play!",
		"Can I drink?",
		"Where is fresh water?"
	};

	for (int i = 0; i < 100; i++) {
		this->ideas[i] = randomIdeas[iIdeas];
		if (iIdeas >= 4)
			iIdeas = 0;
		else
			iIdeas++;
	}
	return;
}

std::string	Brain::getRandomIdea( void ) const {
	return this->ideas[rand() % 100];
}
