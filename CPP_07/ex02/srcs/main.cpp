/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 13:28:28 by phautena          #+#    #+#             */
/*   Updated: 2025/10/01 16:17:55 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cstdlib>
#include "../includes/array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	std::cout << "--------------------------SUBJECT MAIN--------------------------" << std::endl;

	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//


	std::cout << "--------------------------MY OWN MAIN--------------------------" << std::endl;

	Array<std::string>	strings(3);
	strings[0] = "Hi, ";
	strings[1] = "my name is ";
	strings[2] = "Real Slim Shady";

	try
	{
		for (unsigned int i = 0; i < 4; i++)
			std::cout << "[" << i << "] " << strings[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Array<std::string> stringsMirror(strings);
	stringsMirror[2] = "Eminem";

	std::cout << "strings[2]: " << strings[2] << std::endl;
	std::cout << "stringsMirror[2]: " << stringsMirror[2] << std::endl;

	std::cout << "stringsMirror has a size of: " << stringsMirror.size() << std::endl;

	return 0;
}
