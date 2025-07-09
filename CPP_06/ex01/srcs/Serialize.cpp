/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:21:41 by phautena          #+#    #+#             */
/*   Updated: 2025/07/09 15:34:33 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serialize.hpp"

Serialize::Serialize(void)
{
	std::cout << "Serialize default constructor called" << std::endl;
}

Serialize::Serialize(const Serialize& copy)
{
	(void)copy;
	std::cout << "Serialize copy constructor called" << std::endl;
}

Serialize&	Serialize::operator=(const Serialize& rhs)
{
	std::cout << "Serialize assignement operator overload called" << std::endl;
	if (this != &rhs)
		;
	return (*this);
}

Serialize::~Serialize(void)
{
	std::cout << "Serialize default constructor called" << std::endl;
}

uintptr_t	Serialize::serialize(Data *ptr)
{
	uintptr_t	res;

	res = reinterpret_cast<uintptr_t>(ptr);
	return (res);
}

Data*	Serialize::deserialize(uintptr_t raw)
{
	Data	*res;

	res = reinterpret_cast<Data*>(raw);
	return (res);
}

