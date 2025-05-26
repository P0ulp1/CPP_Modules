/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:20:05 by phautena          #+#    #+#             */
/*   Updated: 2025/05/22 14:50:53 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Wrong Animal")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	_type = copy._type;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal assignement operator overload called" << std::endl;
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "*Weird animal sound*" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}
