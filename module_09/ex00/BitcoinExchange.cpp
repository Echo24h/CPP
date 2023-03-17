/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   BitcoinExchange.cpp								:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: gborne <gborne@student.42.fr>			  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/03/17 11:09:19 by gborne			#+#	#+#			 */
/*   Updated: 2023/03/17 11:52:41 by gborne		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) {

	*this = BitcoinExchange("data.csv");
	return ;
}

BitcoinExchange::BitcoinExchange( const std::string & data_path ) {

	std::ifstream	ifs(data_path.c_str());
	std::string		line;

	int				line_number = 0;

	if (ifs.is_open()) {

		while (getline(ifs, line)) {

			if (line.compare("date,exchange_rate") != 0) {

				std::string::size_type pos = line.find(',');

				if (pos != std::string::npos) {

					std::string	date = line.substr(0, pos);
					double		price = atof(line.substr(pos + 1).c_str());

					_market_price_history.insert(std::make_pair(date, price));
				}
				else {
					std::cerr << "Error: could not read line '" << line_number << "' in '" << data_path << "'" << std::endl;
				}
			}

			line_number++;
		}
		ifs.close();
	} else {
		throw std::invalid_argument("Error: could not open file.");
	}

	return ;
}

BitcoinExchange::~BitcoinExchange( void ) {
	return ;
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const & src ) {
	*this = src;
	return ;
}

BitcoinExchange &	BitcoinExchange::operator=( BitcoinExchange const & rhs ) {
	this->_market_price_history = rhs._market_price_history;
	return *this;
}

std::string	dtoa( double number ) {
	std::ostringstream out;
	out << number;
	return out.str();
}

bool number_is_too_large(const std::string& str) {
	int sign = 1;
	size_t i = 0;

	if (str[i] == '-') {
		sign = -1;
		i++;
	}

	std::stringstream ss;
	ss << INT_MAX;
	std::string max_int = ss.str();

	while (i < str.length() && std::isdigit(str[i])) {
		int n = str[i] - '0';

		if (max_int.length() < str.length() - i || (max_int.length() == str.length() - i && max_int.compare(str.substr(i)) < 0)) {
			return true;
		}
		if (max_int.length() == str.length() - i && max_int.compare(str.substr(i)) == 0 && sign == -1 && n > 8) {
			return true;
		}

		i++;
	}

	return false;
}

std::string	BitcoinExchange::_get_balance( const std::string & date, const double & amount ) {

	maket_price_history::reverse_iterator it = _market_price_history.rbegin();

	while( it != _market_price_history.rend()) {
		if (it->first.compare(date) <= 0)
			return dtoa(it->second * amount);
		it++;
	}
	return "market price not found";
}

void	BitcoinExchange::display( const std::string & input_path ) {

	std::ifstream	ifs(input_path.c_str());
	std::string		line;

	if (ifs.is_open()) {

		while (getline(ifs, line)) {

			if (line.compare("date | value") != 0) {

				std::string::size_type pos = line.find('|');

				if (pos != std::string::npos && line[pos - 1] == ' ' && line[pos + 1] == ' ') {

					std::string	date = line.substr(0, pos - 1);

					if (number_is_too_large(line.substr(pos + 2))) {
						std::cerr << "Error: too large a number." << std::endl;
						continue;
					}

					std::istringstream iss(line.substr(pos + 2).c_str());
					double amount;
					iss >> amount;

					if (amount < 0) {
						std::cerr << "Error: not a positive number." << std::endl;
						continue;
					}

					std::cout << date << " => " << amount << " = " << _get_balance(date, amount) << std::endl;

				}
				else {
					std::cerr << "Error: bad imput => " << line << std::endl;
				}
			}
		}
		ifs.close();
	} else {
		throw std::invalid_argument("Error: could not open file.");
	}
	return ;
}
