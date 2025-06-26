/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:09:42 by ubuntu            #+#    #+#             */
/*   Updated: 2025/06/26 14:10:58 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	read_and_write(std::string filename, std::string s1, std::string s2)
{
	std::fstream before(filename.c_str(), std::ios::in);
	if (!before)
	{
		std::cerr << "Error: Can't open file: " << filename << std::endl;
		return (1);
	}

	std::string newName = filename + ".replace";
	std::fstream after(newName.c_str(), std::ios::out);
	if (!after)
	{
		std::cerr << "Error: Cannot create file: " << newName << std::endl;
		return (2);
	}

	std::string line;
	size_t res = 0;
	while (getline(before, line))
	{
		res = 0;
		while ((res = line.find(s1, res)) != std::string::npos)
		{
			line.erase(res, s1.length());
			line.insert(res, s2);
			res += s2.length();
		}
		after << line << "\n";
	}
	return (0);
}

int	check_string(std::string filename, std::string s1)
{
	if (filename.empty() == true)
		return (1);
	if (s1.empty() == true)
		return (2);
	return (0);
}

int	main(int argc, char* argv[])
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	if (check_string(filename, s1) != 0)
	{
		std::cerr << "Error: Please enter correct strings." << std::endl;
		return (2);
	}

	if (read_and_write(filename, s1, s2) != 0)
		return (3);

	return (0);
}
