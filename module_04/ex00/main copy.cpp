/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:51:26 by gborne            #+#    #+#             */
/*   Updated: 2022/09/04 21:01:37 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Animal* k = new Dog();
	*k = *i;

	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;

	std::cout << std::endl;

	j->makeSound();
	i->makeSound(); //will output the cat sound!
	k->makeSound();
	meta->makeSound();

	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete k;
	//meta->~Animal();
	//j->~Animal();
	//i->~Animal();

//...
	return 0;
}
