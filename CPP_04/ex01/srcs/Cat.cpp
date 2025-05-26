/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:53:32 by phautena          #+#    #+#             */
/*   Updated: 2025/05/26 14:54:27 by phautena         ###   ########.fr       */
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
	_brain = new Brain(*copy._brain);
}

Cat	&Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat assignment operator overload called" << std::endl;
	if (this != &rhs)
	{
		delete _brain;
		_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "*Meow Meow" << std::endl;
}

void	Cat::setIdeas(const int &index, const std::string &ideas)
{
	_brain->setIdeas(index, ideas);
}

std::string	Cat::getIdeas(const int &index)
{
	return (_brain->getIdeas(index));
}
