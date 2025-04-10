/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:28:44 by phautena          #+#    #+#             */
/*   Updated: 2025/04/10 14:25:36 by phautena         ###   ########.fr       */
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
			std::getline(std::cin, command);
			if (command == "Y" && command == "N")
				std::cout << "Please enter Y or N." << std::endl;
			else if (command == "Y")
			{
				std::cout << "You're now adding a new contact." << std::endl;
				this->_contacts[this->_oldest % 8].set_info();
				this->_nc++;
				this->_oldest = (this->_oldest + 1) % 8;
				return;
			}
			else if (command == "N")
			{
				std::cout << "Back to main menu." << std::endl;
				return;
			}
		}
	}
	else
	{
		std::cout << "You're now adding a new contact." << std::endl;
		this->_contacts[this->_nc % 8].set_info();
		this->_nc++;
		return;
	}
}

void	PhoneBook::search_contact(void)
{
	std::string	index;

	if (this->_nc == 0)
	{
		std::cout << "There is no contact yet in the PhoneBook. Please add some with the ADD command. Back to main menu." << std::endl;
		return;
	}
	std::cout << "|----------------PHONEBOOK------------------|" << std::endl;
	for (int i = 0; i < this->_nc; i++)
		this->_contacts[i].info_short(i);
	std::cout << "|-------------------------------------------|" << std::endl << std::endl;
	std::cout << "Insert the index of the contact you want detailled information about." << std::endl;
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, index);
		if (!isdigit(index[0]) || index.length() > 1)
		{
			std::cout << "Bad format. Please enter an index (1 - 8)" << std::endl;
			std::cout << "> ";
		}
		else
			//atoi and show long info
	}
}
