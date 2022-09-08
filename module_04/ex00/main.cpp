/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:51:26 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 21:33:42 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;

	std::cout << std::endl;

	j->makeSound();
	i->makeSound(); //will output the cat sound!
	meta->makeSound();

	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	//meta->~Animal();
	//j->~Animal();
	//i->~Animal();
	std::cout << std::endl;

	const WrongAnimal* test = new WrongCat();
	std::cout << test->getType() << " " << std::endl;
	test->makeSound();

	delete test;
//...
	return 0;
}
