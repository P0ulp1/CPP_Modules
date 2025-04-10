/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:24:57 by phautena          #+#    #+#             */
/*   Updated: 2025/04/10 16:22:19 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int	main(void)
{
	PhoneBook	ph;
	std::string	command;

	std::cout << "Welcome to your PhoneBook!" << std::endl;
	ph.help_menu();
	while (1)
	{
		std::cout << std::endl << "> ";
		std::getline(std::cin, command);
		if (command == "ADD")
			ph.add_contact();
		else if (command == "SEARCH")
			ph.search_contact();
		else if (command == "EXIT")
		{
			std::cout << "Thanks for using this PhoneBook. Goodbye!" << std::endl;
			exit(0);
		}
		else if (std::cin.eof())
		{
			command.clear();
			std::cout << "Thanks for using this PhoneBook. Goodbye!" << std::endl;
			exit(0);
		}
		else
			ph.help_menu();
	}
}
