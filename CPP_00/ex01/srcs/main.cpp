/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:24:57 by phautena          #+#    #+#             */
/*   Updated: 2025/04/09 16:13:58 by phautena         ###   ########.fr       */
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
		std::cout << "> ";
		std::cin >> command;
		if (command.compare("ADD") == true)
			ph.add_contact();
		else if (command.compare("SEARCH") == true)
			ph.search_contact();
		else if (command.compare("EXIT") == true)
		{
			std::cout << "Thanks for using this PhoneBook. Goodbye!" << std::endl;
			exit(0);
		}
		else
			ph.help_menu();
	}
}
