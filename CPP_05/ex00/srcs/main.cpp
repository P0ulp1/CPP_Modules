/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:52:55 by phautena          #+#    #+#             */
/*   Updated: 2025/06/05 17:16:24 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int	main(void)
{
	//GRADE TOO HIGH
	try
	{
		Bureaucrat	a("Alpha", 160);
		std::cout << a;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	//GRADE TOO LOW
	try
	{
		Bureaucrat	b("Beta", -42);
		std::cout << b;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	//FINE GRADE
	try
	{
		Bureaucrat	g("Gamma", 3);
		std::cout << g << "I Love CPP" << g << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	return (42);
}
