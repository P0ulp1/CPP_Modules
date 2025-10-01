/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 13:28:28 by phautena          #+#    #+#             */
/*   Updated: 2025/10/01 18:17:32 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

void	printChar(const char c)
{
	std::cout << "Char is: " << c << std::endl;
}

void	upperFirstLetter(std::string &s)
{
	if (s[0] && islower(s[0]))
		s[0] -= 32;
}

void	add(int &a)
{
	a += 1;
}

int	main(void)
{
	//int array test
	int	array[10];
	for (int i = 0; i < 10; i++)
		array[i] = i + 1;

	//int array before iter
	for (int i = 0; i < 10; i++)
		std::cout << "Array[" << i << "] is: " << array[i] << std::endl;

	iter(array, 10, add);

	//int array after iter
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << "Array[" << i << "] is: " << array[i] << std::endl;
	std::cout << std::endl;

	//---------------------------------------------------------------------

	//string array test
	std::string	sarray[5] = {"alix", "pierre", "erika", "adrien", "seb"};

	//string array before iter
	for (int i = 0; i < 5; i++)
		std::cout << "Array[" << i << "] is: " << sarray[i] << std::endl;

	iter(sarray, 5, upperFirstLetter);

	//string array after iter
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << "Array[" << i << "] is: " << sarray[i] << std::endl;

	//---------------------------------------------------------------------

	//const char* test
	std::cout << std::endl;
	const char *s2 = "this is a test";
	iter(s2, strlen(s2), printChar);

	return (0);
}
