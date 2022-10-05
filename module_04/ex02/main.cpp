/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:51:26 by gborne            #+#    #+#             */
/*   Updated: 2022/09/12 22:47:50 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	std::cout << std::endl;

	const AAnimal* tab[10];

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

	AAnimal *test = new Cat();
	AAnimal *test2 = new Cat(*(Cat *)test);
	test2->sayIdea();
	test->sayIdea();
	delete test;
	delete test2;

	//AAnimal tom;

	return 0;
}
