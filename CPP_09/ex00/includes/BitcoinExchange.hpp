/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:00:48 by phautena          #+#    #+#             */
/*   Updated: 2026/02/17 15:19:48 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# define SUCCESS 0
# define ERROR 1

# include <iostream>
# include <map>
# include <fstream>
# include <stdlib.h>

class BitcoinExchange
{
	private:
		std::map<std::string, float> _data;

		int _parseLine(std::string line);
		int _parseDate(std::string date);
	public:
		BitcoinExchange(void);
		~BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &rhs);

		int init_csv(void);
		int exchange(std::string input);
};

#endif
