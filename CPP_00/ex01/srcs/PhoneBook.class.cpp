/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:28:44 by phautena          #+#    #+#             */
/*   Updated: 2025/04/09 17:17:58 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->_nc = 0;
	this->_oldest = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void	PhoneBook::help_menu(void)
{
	std::cout << "The available commands are: ADD, SEARCH, EXIT." << std::endl;
	return;
}

void	PhoneBook::add_contact(void)
{
	std::string	command;

	if (this->_nc % 8 > 8)
	{
		std::cout << "You have reach the maximum (8) number of contacts, would you like to erase the oldest one to add a new? (Y)es or (N)o" << std::endl;
		while (1)
		{
			std::cout << "> ";
			std::cin >> command;
			if (command.compare("Y") == false && command.compare("N") == false)
				std::cout << "Please enter Y or N." << std::endl;
			else if (command.compare("Y") == true)
			{
				std::cout << "You're now adding a new contact." << std::endl;
				this->_contacts[this->_oldest % 8].set_info();
				this->_oldest = (this->_oldest + 1) % 8;
			}
			else if (command.compare("N") == true)
				std::cout << "Back to main menu." << std::endl;
		}
	}
	else
	{
		std::cout << "You're now adding a new contact." << std::endl;
		this->_contacts[this->_nc % 8].set_info();
	}
}
