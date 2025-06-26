/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:53:34 by phautena          #+#    #+#             */
/*   Updated: 2025/06/26 17:02:47 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = copy._brain;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog assignment operator overload called" << std::endl;
	if (this != &rhs)
	{
		_type = rhs._type;
		_brain = rhs._brain;
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "*Bark Bark" << std::endl;
}

void	Dog::setIdeas(const int &index, const std::string &ideas)
{
	_brain->setIdeas(index, ideas);
}

std::string	Dog::getIdeas(const int &index)
{
	return (_brain->getIdeas(index));
}
