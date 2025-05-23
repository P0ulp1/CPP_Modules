/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:53:32 by phautena          #+#    #+#             */
/*   Updated: 2025/05/23 14:02:14 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Brain.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = copy._brain;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat assignment operator overload called" << std::endl;
	if (this != &rhs)
	{
		_type = rhs._type;
		_brain = rhs._brain;
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "*Meow Meow" << std::endl;
}

void	Cat::setIdeas(const std::string &ideas)
{
	_brain->setIdeas(ideas);
}

std::string	Cat::getIdeas(int index)
{
	return (_brain->getIdeas(index));
}
