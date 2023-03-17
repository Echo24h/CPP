/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:14:18 by gborne            #+#    #+#             */
/*   Updated: 2023/03/17 17:17:48 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN( void ) {
	return ;
}

RPN::RPN( const std::string & line ) {

	calculate(line);
	return ;
}

RPN::~RPN( void ) {
	return ;
}

int	operation(int x, char op, int y) {

	if (op == '-')
		return x - y;
	else if (op == '+')
		return x + y;
	else if (op == '/')
		return x / y;
	else if (op == '*')
		return x * y;
	return 0;
}

void	RPN::calculate( const std::string & line ) {

	for (size_t i = 0; i < line.size(); i++) {

		if (isdigit(line[i])) {
			_stack.push(line[i] - '0');
		}
		else if (line[i] == '-' || line[i] == '+' || line[i] == '*' || line[i] == '/') {
			if (_stack.size() < 2)
				throw std::invalid_argument("Error: logic error");
			int num = _stack.top();
			_stack.pop();
			num = operation(_stack.top(), line[i], num);
			_stack.pop();
			_stack.push(num);
		}
		else if (line[i] != ' ') {
			throw std::invalid_argument("Error: wrong character");
		}
	}
	while (_stack.size() > 0) {
		std::cout << _stack.top();
		_stack.pop();
		if (_stack.size() > 0)
			std::cout << ' ';
		else
			std::cout << std::endl;
	}
}
