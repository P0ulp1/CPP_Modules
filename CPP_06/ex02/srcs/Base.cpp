/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:58:14 by phautena          #+#    #+#             */
/*   Updated: 2025/07/15 17:30:08 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "../includes/ABC.hpp"

Base*	generate(void)
{
	srand(time(NULL));
	int	value = rand() % 3;

	if (value == 0)
	{
		std::cout << "Type A generated" << std::endl;
		return (new A());
	}
	else if (value == 1)
	{
		std::cout << "Type B generated" << std::endl;
		return (new B());
	}
	else if (value == 2)
	{
		std::cout << "Type C generated" << std::endl;
		return (new C());
	}
	return (NULL);
}

void	identify(Base* p)
{
	A*	a = dynamic_cast<A*>(p);
	B*	b = dynamic_cast<B*>(p);
	C*	c = dynamic_cast<C*>(p);
	if (a != NULL)
		std::cout << "A" << std::endl;
	else if (b != NULL)
		std::cout << "B" << std::endl;
	else if (c != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "An error occured" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A&	a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}
	try
	{
		B&	b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)b;
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}
	try
	{
		C&	c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)c;
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}


}

Base::~Base(void)
{
	std::cout << "Base destructor called" << std::endl;
}
