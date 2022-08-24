/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:14:47 by gborne            #+#    #+#             */
/*   Updated: 2022/08/24 14:33:36 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Editor.hpp"

int	main( int argc, char **argv )
{
	if (argc != 4)
		std::cerr << "Error : ./a.out <filename> <s1> <s2>" << std::endl;
	else
	{
		Editor editor(argv[1], argv[2], argv[3]);
		editor.createReplaceFile();
	}
	return (0);
}
