/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 13:28:28 by phautena          #+#    #+#             */
/*   Updated: 2025/10/14 13:39:55 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

int main(int argc, char** argv)
{
	(void)argv;
	if (argc != 2)
	{
		std::cout << "[-] Usage: ./btc <db_file>" << std::endl;
		return (ERROR);
	}

	BitcoinExchange btc;
	if (btc.init_csv() == ERROR)
		return (ERROR);
	if (btc.exchange(argv[1]) == ERROR)
		return (ERROR);

	return (SUCCESS);
}
