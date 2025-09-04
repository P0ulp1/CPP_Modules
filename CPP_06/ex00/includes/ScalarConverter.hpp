/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:05:54 by phautena          #+#    #+#             */
/*   Updated: 2025/09/04 13:25:46 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <limits>
# include <iomanip>
# include <cmath>

# define INT_MAX	2147483647
# define INT_MIN	-2147483648

class ScalarConverter
{
	public:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter	&operator=(const ScalarConverter &rhs);
		virtual ~ScalarConverter(void) = 0;

		static void	convert(const std::string str);
};

bool		isChar(const std::string str);
bool		isInt(const std::string str);
bool		isFloat(const std::string str);
bool		isDouble(const std::string str);

void		printChar(const char c);
void		printInt(const int i);
void		printFloat(const float f);
void		printDouble(const double d);

#endif
