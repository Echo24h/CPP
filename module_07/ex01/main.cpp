/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:57:44 by gborne            #+#    #+#             */
/*   Updated: 2022/10/06 14:26:17 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main( void ) {

	int tab1[] = {45, 46, 47, 48};
	char tab2[] = {'a', 'b', 'c', 'd'};

	std::cout << "TAB1:" << std::endl;
	::iter(tab1, 4, &print);
	std::cout << "sub -> TAB1" << std::endl;
	::iter(tab1, 4, &sub);
	std::cout << "TAB1:" << std::endl;
	::iter(tab1, 4, &print);

	std::cout << "TAB2:" << std::endl;
	::iter(tab2, 4, &print);
	std::cout << "add -> TAB2" << std::endl;
	::iter(tab2, 4, &add);
	std::cout << "TAB2:" << std::endl;
	::iter(tab2, 4, &print);

	return 0;
}
