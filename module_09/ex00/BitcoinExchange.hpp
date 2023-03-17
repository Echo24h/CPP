/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gborne <gborne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:09:23 by gborne            #+#    #+#             */
/*   Updated: 2023/03/17 12:52:12 by gborne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <sstream>
# include <iomanip>
# include <fstream>
# include <cstdlib>
# include <climits>
# include <map>

class BitcoinExchange
{
	public:

		typedef std::map<std::string, double>	maket_price_history;

		BitcoinExchange( void );

		BitcoinExchange( const std::string & data_path );

		~BitcoinExchange();

		BitcoinExchange( BitcoinExchange const & src );

		BitcoinExchange &	operator=( BitcoinExchange const & rhs );

		void	display( const std::string & input_path );

	private:

		std::string	_get_balance( const std::string & date, const double & amount );

		maket_price_history	_market_price_history;
};
