/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:08:00 by phautena          #+#    #+#             */
/*   Updated: 2025/09/04 13:39:16 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	std::cout << "ScalarConverter constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	(void)copy;
	std::cout << "ScalarConverter copy constructor called" << std::endl;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &rhs)
{
	(void)rhs;
	std::cout << "ScalarConverter assignement operator overload called" << std::endl;
	return (*this);
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout << "ScalarConverter destructor called" << std::endl;
}

void	ScalarConverter::convert(const std::string str)
{
	char	cvalue;
	int		ivalue;
	float	fvalue;
	double	dvalue;

	if (str[0] == '\0')
		std::cout << "Invalid litteral" << std::endl;
	else if (isChar(str) == true)
	{
		cvalue = static_cast<char>(str[0]);
		printChar(cvalue);
	}
	else if (isInt(str) == true)
	{
		ivalue = atoi(str.c_str());
		printInt(ivalue);
	}
	else if (isFloat(str) == true)
	{
		fvalue = std::strtof(str.c_str(), NULL);
		printFloat(fvalue);
	}
	else if (isDouble(str) == true)
	{
		dvalue = std::strtod(str.c_str(), NULL);
		printDouble(dvalue);
	}
	else
		std::cout << "Invalid litteral" << std::endl;
}

bool	isChar(const std::string str)
{
	if (str.length() == 1 && str[0] > 31 && str[0] < 127 && !isdigit(str[0]))
		return (true);
	return (false);
}

bool	isInt(const std::string str)
{
	char*	end;
	long	value;

	value = std::strtol(str.c_str(), &end, 10);
	if (*end == '\0' && value <= INT_MAX && value >= INT_MIN)
		return (true);
	return (false);
}

bool	isFloat(const std::string str)
{
	char*	end;

	if (!str.compare("-inff") || !str.compare("+inff") || !str.compare("nanf"))
		return (true);
	std::strtof(str.c_str(), &end);
	if (*end == 'f' && *(end + 1) == '\0' && *(end - 1) != '.')
		return (true);
	return (false);
}

bool	isDouble(const std::string str)
{
	char*	end;

	if (!str.compare("-inf") || !str.compare("+inf") || !str.compare("nan"))
		return (true);
	std::strtod(str.c_str(), &end);
	if (*end == '\0' && *(end - 1) != '.')
		return (true);
	return (false);
}

void	printChar(const char c)
{
	if (c < 32 || c > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(c) << std::endl;
}

void	printInt(const int i)
{
	if (i < 32 || i > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	if (i < INT_MIN || i > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(i) << std::endl;
}

void	printFloat(const float f)
{
	if (std::isinf(f) || std::isnan(f))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		if (f < 32 || f > 126)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
		if (static_cast<int>(f) < INT_MIN || static_cast<int>(f) > INT_MAX)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(f) << std::endl;
	}
	std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(f) << std::endl;
}

void	printDouble(const double d)
{
	if (std::isinf(d) || std::isnan(d))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		if (d < 32 || d > 126)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
		if (d < INT_MIN || d > INT_MAX)
			std::cout << "int: impossible" << std::endl;
		else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	}
	std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl;
}
