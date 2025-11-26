/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:38:28 by phautena          #+#    #+#             */
/*   Updated: 2025/11/14 17:32:10 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	bot;

	std::cout << "Launching HARL.... Please Wait..." << std::endl;
	std::cout << "Hello, I'm HARL. Starting demo mode for demonstration purposes." << std::endl;
	std::cout << "Displaying my 4 level of complains." << "\n" << std::endl;



	std::cout << "Level DEBUG:" << std::endl;
	bot.complain("DEBUG");
	std::cout << "\nLevel INFO:" << std::endl;
	bot.complain("INFO");
	std::cout << "\nLevel WARNING:" << std::endl;
	bot.complain("WARNING");
	std::cout << "\nLevel ERROR:" << std::endl;
	bot.complain("ERROR");
	std::cout << "\nGibberish input:" << std::endl;
	bot.complain("Invalid input");
	return (0);
}
