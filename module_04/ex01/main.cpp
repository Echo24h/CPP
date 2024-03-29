/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:51:26 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 22:55:56 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	std::cout << std::endl;

	const Animal* tab[10];

	for (int i = 0; i < 10; i++) {
		if (i < 5)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
	}

	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		tab[i]->sayIdea();

	std::cout << std::endl;

	for (int i = 0; i < 10; i++) {
		delete tab[i];
	}

	std::cout << std::endl;

	Animal *test = new Cat();
	Animal *test2 = new Cat(*(Cat *)test);
	test2->sayIdea();
	test->sayIdea();
	delete test;
	delete test2;

	return 0;
}
