/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:44:53 by gborne            #+#    #+#             */
/*   Updated: 2022/10/07 16:27:28 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define	RED "\033[1;31m"
#define	GREEN "\033[1;32m"
#define	DEF "\033[0m"

int main()
{

	// simple

	std::cout << GREEN << "OK" << DEF << std::endl;

	try {

		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	// 100 nombres négatifs

	std::cout << GREEN << "OK" << DEF << std::endl;

	try {

		Span sp = Span(100);
		std::list<int>	lst;

		for (int i = 0; i  < 100; i++)
			lst.push_back(i * -3);

		sp.addNumbers(lst.begin(), lst.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	// 20 000 nombres

	std::cout << GREEN << "OK" << DEF << std::endl;

	try {

		Span sp = Span(20000);
		std::list<int>	lst;

		for (int i = 0; i  < 20000; i++)
			lst.push_back(i * 10);

		sp.addNumbers(lst.begin(), lst.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	// Crash distance

	std::cout << RED << "KO" << DEF << std::endl;

	try {

		Span sp = Span(1);
		std::list<int>	lst;

		for (int i = 0; i  < 1; i++)
			lst.push_back(i * 10);

		sp.addNumbers(lst.begin(), lst.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	// Crash limit

	std::cout << RED << "KO" << DEF << std::endl;

	try {

		Span sp = Span(100);
		std::list<int>	lst;

		for (int i = 0; i  < 101; i++)
			lst.push_back(i * 10);

		sp.addNumbers(lst.begin(), lst.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
