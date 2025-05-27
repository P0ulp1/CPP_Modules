/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:06:32 by phautena          #+#    #+#             */
/*   Updated: 2025/05/27 16:51:57 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character(void) : _name("null")
{
	std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		_ground[i] = NULL;
}

Character::Character(std::string const &name) : _name(name)
{
	std::cout << "Character parameterized constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		_ground[i] = NULL;
}

Character::Character(const Character &copy)
{
	std::cout << "Character copy constructor called" << std::endl;
	_name = copy._name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = copy._inventory[i]->clone();
	for (int i = 0; i < 100; i++)
		_ground[i] = copy._ground[i]->clone();
}

Character	&Character::operator=(const Character &rhs)
{
	std::cout << "Character assignement operator overload called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
			{
				delete _inventory[i];
				_inventory[i] = NULL;
			}
			if (rhs._inventory[i])
				_inventory[i] = rhs._inventory[i]->clone();
		}
		for (int i = 0; i < 100; i++)
		{
			if (_ground[i])
			{
				delete _ground[i];
				_ground[i] = NULL;
			}
			if (rhs._ground[i])
				_ground[i] = rhs._ground[i]->clone();
		}
	}
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
	for (int i = 0; i < 100; i++)
		delete _ground[i];
}

std::string const	&Character::getName(void) const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			std::cout << "Materia Equipped" << std::endl;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Invalid Index" << std::endl;
		return;
	}
	else if (!_inventory[idx])
	{
		std::cout << "No Materia in this slot" << std::endl;
	}
	for (int i = 0; i < 100; i++)
	{
		if (!_ground[i])
		{
			_ground[i] = _inventory[idx];
			_inventory[idx] = NULL;
			std::cout << "Materia Unequipped" << std::endl;
		}
	}

}

void	Character::use(int idx, ICharacter &target)
{
	if (_inventory[idx])
		_inventory[idx]->use(target);
}
