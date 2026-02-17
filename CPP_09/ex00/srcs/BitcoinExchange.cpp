/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:00:46 by phautena          #+#    #+#             */
/*   Updated: 2026/02/17 15:32:01 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::~BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) : _data(copy._data) {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this != &rhs)
		_data = rhs._data;
	return (*this);
}

int BitcoinExchange::init_csv(void)
{
	std::ifstream csv("data.csv");
	if (csv.is_open() == false)
	{
		std::cout << "[-] Failed to open data.csv" << std::endl;
		return (ERROR);
	}

	std::string line, date, value;
	getline(csv, line);
	while (getline(csv, line))
	{
		date = line.substr(0, line.find(','));
		value = line.substr(line.find(',') + 1, line.find('\n'));
		_data.insert(std::make_pair(date, atof(value.c_str())));
	}

	return (SUCCESS);
}

int BitcoinExchange::exchange(std::string filename)
{

	std::ifstream input(filename.c_str());
	if (input.is_open() == false)
	{
		std::cout << "[-] Failed to open " << filename << std::endl;
		return (ERROR);
	}

	std::string line;
	getline(input, line);
	if (line != "date | value")
	{
		std::cout << "The input file is missing it's header." << std::endl;
		return (ERROR);
	}

	std::map<std::string, float>::iterator it;

	while (getline(input, line))
	{
		if (_parseLine(line) == SUCCESS)
		{
			std::string date, value;
			date = line.substr(0, line.find_first_of(' '));
			value = line.substr(line.find_last_of(' '), line.find('\n'));
			it = _data.lower_bound(date);

			std::cout << date << " => " << value << " = " << atof(value.c_str()) * it->second << std::endl;
		}
	}

	return (SUCCESS);
}

int BitcoinExchange::_parseDate(std::string date)
{
	int year = atoi(date.substr(0, 4).c_str());
	int month = atoi(date.substr(5, 2).c_str());
	int day = atoi(date.substr(8, 2).c_str());
	if (year < 1 || month <= 0 || month > 12 || day < 1 || day > 31)
	{
		std::cout << date << " => Error: date has bad formatting." << std::endl;
		return (ERROR);
	}
	return (SUCCESS);
}

int BitcoinExchange::_parseLine(std::string line)
{
	int i = 0;
	if (line.empty() == true)
	{
		std::cout << "Error: line is empty." << std::endl;
		return (ERROR);
	}
	std::string date = line.substr(0, 13);
	while (line[i++])
	{
		if ((i < 4 || (i > 4 && i < 7) || (i > 7 && i < 9)) && isdigit(line[i]) == false)
		{
			std::cout << line << " => Error: date has bad formatting." << std::endl;
			return (ERROR);
		}
		else if ((i == 4 || i == 7) && line[i] != '-')
		{
			std::cout << line << " => Error: date has bad formatting." << std::endl;
			return (ERROR);
		}
		else if ((i == 10 || i == 12) && line[i] != ' ')
		{
			std::cout << line << " => Error: no space where they should be." << std::endl;
			return (ERROR);
		}
		else if (i == 11 && line[i] != '|')
		{
			std::cout << line << " => Error: no pipe where it should be." << std::endl;
			return (ERROR);
		}
	}
	if (_parseDate(date))
		return (ERROR);

	std::string value = line.substr(13, line.length() - 13);
	bool point = false;
	for (size_t i = 0; i < value.length(); i++)
	{
		if (value[0] == '.')
		{
			std::cout << line << " => Error: value has bad formatting." << std::endl;
			return (ERROR);
		}
		if (value[i] == '.' && point == false)
			point = true;
		else if (value[i] == '.' && point == true)
		{
			std::cout << line << " => Error: value has bad formatting." << std::endl;
			return (ERROR);
		}
		else if (isdigit(value[i]) == false)
		{
			std::cout << line << " => Error: value is not only composed of digits." << std::endl;
			return (ERROR);
		}
	}

	float f = atof(value.c_str());
	if (f < 0 || f > 1000)
	{
		std::cout << line << " => Error: value is under 0 or above 1000." << std::endl;
		return (ERROR);
	}

	return (SUCCESS);
}
