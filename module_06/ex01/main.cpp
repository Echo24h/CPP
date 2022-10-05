/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:20:14 by gborne            #+#    #+#             */
/*   Updated: 2022/10/05 14:00:25 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct Data {
	int			n;
	std::string	str;
};

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int	main( void ) {

	Data		*start = new Data;
	Data		*result;

	start->n = 10;
	start->str = "coucou";

	std::cout << "START:" << std::endl;
	std::cout << "n: " << start->n << std::endl;
	std::cout << "str: " << start->str << std::endl;

	result = deserialize(serialize(start));

	std::cout << "END:" << std::endl;
	std::cout << "n: " << result->n << std::endl;
	std::cout << "str: " << result->str << std::endl;

	delete  start;

	return 0;
}
