/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:08:00 by phautena          #+#    #+#             */
/*   Updated: 2025/06/09 16:45:16 by phautena         ###   ########.fr       */
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

bool	isInt(const std::string str)
{
	long	value;
	char	*end;

	value = std::strtol(str.c_str(), &end, 10);
	if (value > INT_MAX || value < INT_MIN || *end != '\0')
		return (false);
	else
		return (true);
}

bool	isFloat(const std::string str)
{
	float	value;
	char	*end;

	value = std::strtof(str.c_str(), &end);
	std::cout << "END: " << end << std::endl;
	if (*end == '\0')
		return (true);
	else
		return (false);
}
