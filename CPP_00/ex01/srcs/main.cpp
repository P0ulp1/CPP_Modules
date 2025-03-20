/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 12:34:58 by phautena          #+#    #+#             */
/*   Updated: 2025/03/20 13:51:40 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	main(void) {

	PhoneBook	ph;
	std::string	input;

	while (input != "EXIT")
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, input);
		if (input == "ADD")
			ph.add();
		else if (std::cin.eof())
			return (42);
	}
	return (0);
}
