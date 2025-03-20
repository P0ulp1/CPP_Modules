/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 13:13:39 by phautena          #+#    #+#             */
/*   Updated: 2025/03/20 15:02:39 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {

	std::cout << "Welcome to your new PhoneBook!" << std::endl;
	this->_index = 0;
}

PhoneBook::~PhoneBook(void) {

	std::cout << "Goodbye!" << std::endl;
}

int		PhoneBook::_valid_string(std::string str, int mode) {

	for (int i = 0; str[i]; i++)
	{
		if (mode == 1)
		{
			if (!isalpha(str[i]))
				return (1);
		}
		else
		{
			if (!isdigit(str[i]))
				return (1);
		}
	}
	return (0);
}

void	PhoneBook::add(void) {

	std::string	input;

	if (this->_index > 7)
		std::cout << "Warning, overwriting " << this->_contacts[this->_index % 8].get_fname() << "'s contact." << std::endl;
	while (1)
	{
		std::cout << "Enter the contact's first name: ";
		std::getline(std::cin, input);
		if (_valid_string(input, 1))
			std::cout << "Please enter a correct first name." << std::endl;
		else
		{
			this->_contacts[0].set_fname(input);
			break;
		}
	}
	while (1)
	{
		std::cout << "Enter the contact's last name: ";
		std::getline(std::cin, input);
		if (_valid_string(input, 1))
			std::cout << "Please enter a correct last name." << std::endl;
		else
		{
			this->_contacts[0].set_lname(input);
			break;
		}
	}
	while (1)
	{
		std::cout << "Enter the contact's nickname: ";
		std::getline(std::cin, input);
		if (_valid_string(input, 1))
			std::cout << "Please enter a correct nickname." << std::endl;
		else
		{
			this->_contacts[0].set_nickname(input);
			break;
		}
	}
	while (1)
	{
		std::cout << "Enter the contact's phone nunber: ";
		std::getline(std::cin, input);
		if (_valid_string(input, 0))
			std::cout << "Please enter a correct phone number." << std::endl;
		else
		{
			this->_contacts[0].set_phone(input);
			break;
		}
	}
	while (1)
	{
		std::cout << "Enter the contact's dirtiest's secret: ";
		std::getline(std::cin, input);
		this->_contacts[0].set_secret(input);
		break;
	}
	this->_index++;
}

void	PhoneBook::search(void) {

	for (int i = 0; i < 26; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < this->_index % 8; i++)
	{

	}
}

