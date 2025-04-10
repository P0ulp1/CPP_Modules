/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:12:50 by phautena          #+#    #+#             */
/*   Updated: 2025/04/10 14:19:40 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::set_info(void)
{
	std::cout << "First Name: ";
	while (std::getline(std::cin, this->_fname), this->_fname.empty())
	{
		std::cout << "Field cannot be empty. Please enter a value." << std::endl;
		std::cout << "First Name: ";
	}
	std::cout << "Last Name: ";
	while (std::getline(std::cin, this->_lname), this->_lname.empty())
	{
		std::cout << "Field cannot be empty. Please enter a value." << std::endl;
		std::cout << "Last Name: ";
	}
	std::cout << "Nickname: ";
	while (std::getline(std::cin, this->_nname), this->_nname.empty())
	{
		std::cout << "Field cannot be empty. Please enter a value." << std::endl;
		std::cout << "Nickname: ";
	}
	std::cout << "Phone Number: ";
	while (std::getline(std::cin, this->_phone), this->_phone.empty())
	{
		std::cout << "Field cannot be empty. Please enter a value." << std::endl;
		std::cout << "Phone Number: ";
	}
	std::cout << "Darkest Secret: ";
	while (std::getline(std::cin, this->_secret), this->_secret.empty())
	{
		std::cout << "Field cannot be empty. Please enter a value." << std::endl;
		std::cout << "Darkest Secret: ";
	}
}

void	Contact::info_short(int index)
{
	std::cout << "|" << std::setw(10) << index << "|";
	if (this->_fname.length() > 10)
		std::cout << std::setw(10) << this->_fname.substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(10) << this->_fname << "|";
	if (this->_lname.length() > 10)
		std::cout << std::setw(10) << this->_lname.substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(10) << this->_lname << "|";
	if (this->_nname.length() > 10)
		std::cout << std::setw(10) << this->_nname.substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(10) << this->_nname << "|" << std::endl;
}

void	Contact::info_long(void)
{
	
}
