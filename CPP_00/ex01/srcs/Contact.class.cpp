/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:12:50 by phautena          #+#    #+#             */
/*   Updated: 2025/06/30 16:00:50 by phautena         ###   ########.fr       */
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

void	Contact::set_field(std::string field_name, std::string &_field)
{
	std::cout << field_name;
	while (std::getline(std::cin, _field) && !std::cin.eof())
	{
		int	err = 0;
		if (field_name == "Phone Number: ")
		{
			for (size_t i = 0; i < _field.length(); i++)
			{
				if (_field[i] < 48 || _field[i] > 57)
					err = 1;
			}
		}
		if (!_field.empty() && _field.find('\033') == std::string::npos && err != 1)
			return ;
		std::cout << "Field doesn't accept some of the provided input. Please enter a correct value." << std::endl;
		std::cout << field_name;
	}
	_field.clear();
	std::cout << std::endl << "Thanks for using this PhoneBook. Goodbye!" << std::endl;
	exit(0);
}

void	Contact::set_info(void)
{
	set_field("First Name: ", _fname);
	set_field("Last Name: ", _lname);
	set_field("Nickname: ", _nname);
	set_field("Phone Number: ", _phone);
	set_field("Darkest Secret: ", _secret);
}

void	Contact::info_short(int index)
{
	std::cout << "|" << std::setw(10) << index + 1 << "|";
	if (this->_fname.length() > 10)
		std::cout << std::setw(10) << this->_fname.substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(10) << this->_fname << "|";
	if (this->_lname.length() > 10)
		std::cout << std::setw(10) << this->_lname.substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(10) << this->_lname << "|";
	if (this->_nname.length() > 10)
		std::cout << std::setw(10) << this->_nname.substr(0, 9) + "." << "|" << std::endl;
	else
		std::cout << std::setw(10) << this->_nname << "|" << std::endl;
}

void	Contact::info_long(void)
{
	std::cout << "/------------------------------------------------------\\" << std::endl;
	if (this->_fname.length() > 10)
		std::cout << "|" << std::setw(10) << this->_fname.substr(0, 9) + "." << "|";
	else
		std::cout << "|" << std::setw(10) << this->_fname << "|";
	if (this->_lname.length() > 10)
		std::cout << std::setw(10) << this->_lname.substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(10) << this->_lname << "|";
	if (this->_nname.length() > 10)
		std::cout << std::setw(10) << this->_nname.substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(10) << this->_nname << "|";
	if (this->_phone.length() > 10)
		std::cout << std::setw(10) << this->_phone.substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(10) << this->_phone << "|";
	if (this->_secret.length() > 10)
		std::cout << std::setw(10) << this->_secret.substr(0, 9) + "." << "|" << std::endl;
	else
		std::cout << std::setw(10) << this->_secret << "|" << std::endl;
	std::cout << "\\------------------------------------------------------/" << std::endl;
}
