/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 13:28:28 by phautena          #+#    #+#             */
/*   Updated: 2025/10/14 15:45:57 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

int main(void)
{
	//VALID
	try {
		std::list<int>	numbers;

		numbers.push_back(42);
		numbers.push_back(21);
		numbers.push_back(1);

		easyfind(numbers, 1);
		easyfind(numbers, 42);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	//INVALID
	try {
		std::list<int>	numbers;

		numbers.push_back(42);
		numbers.push_back(21);
		numbers.push_back(1);

		easyfind(numbers, 12);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}
