/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 13:28:28 by phautena          #+#    #+#             */
/*   Updated: 2025/10/07 12:28:43 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

int main(int, char**)
{
	std::list<int>	numbers;

	numbers.push_back(42);
	numbers.push_back(21);
	numbers.push_back(1);

	easyfind(numbers, 45);
	easyfind(numbers, 42);

	return (0);
}
