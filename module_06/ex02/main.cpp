/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:01:52 by gborne            #+#    #+#             */
/*   Updated: 2022/10/05 15:04:39 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {

	int		n;
	Base	*ptr;

	srand(time(NULL));
	n = random() % 3;

	if (n == 1)
		ptr = new A;
	else if (n == 2)
		ptr = new B;
	else
		ptr = new C;

	return ptr;
}

void identify(Base* p) {

	A	*a;
	B	*b;

	if ((a = dynamic_cast<A *>(p)))
		std::cout << "A" << std::endl;
	else if ((b = dynamic_cast<B *>(p)))
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;
}

void identify(Base& p) {
	try {
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	} catch (std::exception &e) { (void)e; }

	try {
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	} catch (std::exception &e) { (void)e; }

	try {
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	} catch (std::exception &e) { (void)e; }
}

int	main( void ) {

	Base *ptr = generate();

	std::cout << "identify(Base& p): ";
	identify(*ptr);
	std::cout << "identify(Base* p): ";
	identify(ptr);

	delete ptr;

	return 0;
}
