/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:43:44 by phautena          #+#    #+#             */
/*   Updated: 2025/05/21 15:18:19 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(void) : _type("null")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	_type = copy._type;
}

Animal	&Animal::operator=(const Animal &rhs)
{
	std::cout << "Animal assignment operator overload called" << std::endl;
	if (this != &rhs)
	{
		_type = rhs._type;
	}
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "*Animal sound*" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (_type);
}
