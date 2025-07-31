/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:36:07 by phautena          #+#    #+#             */
/*   Updated: 2025/07/31 16:40:23 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"
#include <sstream>

void	upChar(char &c)
{
	c = std::toupper(c);
}

int	main(void)
{

	std::string	str = "This is a string";

	std::cout << "Before iter: " << str << std::endl;
	iter(&str[0], str.length(), upChar);
	std::cout << "After iter: " << str << std::endl;

	return (0);
}
