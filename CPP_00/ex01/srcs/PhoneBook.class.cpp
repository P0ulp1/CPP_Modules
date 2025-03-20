/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 13:13:39 by phautena          #+#    #+#             */
/*   Updated: 2025/03/20 13:51:36 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


PhoneBook::PhoneBook(void) {

	std::cout << "Welcome to your new PhoneBook!" << std::endl;
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

	while (!std::cin.eof())
	{
		std::cout << "Enter the contact's first name: ";
		std::getline(std::cin, input);
		if (_valid_string(input, 1))
			std::cout << "Please enter a correct name." << std::endl;
		else
		{
			this->_contacts[0].set_fname(input);
			break;
		}
	}
}
