/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p0ulp1 <p0ulp1@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:52:55 by phautena          #+#    #+#             */
/*   Updated: 2025/05/31 14:51:35 by p0ulp1           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

int	main(void)
{
	try
	{
		Form		f("Raising wages", 50, 50);
		Bureaucrat	b("Bob", 30);
		
		std::cout << f;
		b.signForm(f);
		std::cout << f;

		Form		f2("Lowering wages", 1, 1);
		Bureaucrat	b2("Jack", 150);

		std::cout << f2;
		b2.signForm(f2);
		std::cout << f2;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (42);
}
