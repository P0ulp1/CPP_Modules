/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 12:34:58 by phautena          #+#    #+#             */
/*   Updated: 2025/03/20 14:46:26 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int	main(void) {

	PhoneBook	ph;
	std::string	input;

	while (input != "EXIT")
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, input);
		if (input == "ADD")
			ph.add();
		else if (input == "SEARCH")
			ph.search();
		else if (std::cin.eof())
			return (42);
	}
	return (0);
}
