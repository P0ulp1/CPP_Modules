/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:24:20 by phautena          #+#    #+#             */
/*   Updated: 2025/05/26 14:42:55 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
}

Brain	&Brain::operator=(const Brain &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

void	Brain::setIdeas(const int &index, const std::string &ideas)
{
	if (index >= 0 && index <= 99)
		_ideas[index] = ideas;
	else
		std::cout << "Invalid ideas index" << std::endl;
}

std::string	Brain::getIdeas(const int &index)
{
	if (index >= 0 && index <= 99)
		return (_ideas[index]);
	else
	{
		std::cout << "Invalid ideas index" << std::endl;
		return ("null");
	}
}
