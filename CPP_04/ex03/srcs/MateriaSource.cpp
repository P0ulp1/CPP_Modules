/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p0ulp1 <p0ulp1@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:14:59 by p0ulp1            #+#    #+#             */
/*   Updated: 2025/05/28 15:43:26 by p0ulp1           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_memory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
		_memory[i] = copy._memory[i]->clone();
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_memory[i])
			{
				delete _memory[i];
				_memory[i] = NULL;
			}
			if (rhs._memory[i])
				_memory[i] = rhs._memory[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		delete _memory[i];
}

void	MateriaSource::learnMateria(AMateria *src)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_memory[i])
		{
			std::cout << "Materia Learned" << std::endl;
			_memory[i] = src;
			return;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_memory[i] && _memory[i]->getType() == type)
		{
			std::cout << "Materia of type " << _memory[i]->getType() << " created" << std::endl;
			return (_memory[i]->clone());
		}
	}
	std::cout << "No materia of type " << type << "exists in MateriaSource. Learn it first" << std::endl;
	return (NULL);
}

