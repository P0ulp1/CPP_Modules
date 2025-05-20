/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:54:09 by phautena          #+#    #+#             */
/*   Updated: 2025/05/20 15:57:07 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default"), _hp(10), _ep(10), _atk(0)
{
	std::cout << "ClapTrap " << _name << " just went out from the factory" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _atk(0)
{
	std::cout << "ClapTrap " << _name << " just went out from the factory" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " has gone to the recycling factory" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	_name = copy._name;
	_hp = copy._hp;
	_ep = copy._ep;
	_atk = copy._atk;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_hp = rhs._hp;
		_ep = rhs._ep;
		_atk = rhs._atk;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (_ep >= 1 && _hp > 0)
	{
		_ep--;
		std::cout << "ClapTrap " << _name << " attacks " << target << "with " << _atk << "ATK force" << std::endl;
	}
	else if (_hp <= 0)
		std::cout << "ClapTrap " << _name << " cannot attack because he is already dead" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " doesn't have enough EP/HP to attack " << target << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hp -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount << "DMG" << std::endl;
	if (_hp <= 0)
		std::cout << "This fatal blow cause ClapTrap " << _name << "to be destroyed... RIP" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{

	if (_ep >= 1 && _hp > 0)
	{
		--_ep;
		_hp += amount;
		std::cout << "ClapTrap " << _name << " opens his hatch and repairs himself and gains " << amount << "HP" << std::endl;
	}
	else if (_hp <= 0)
		std::cout << "ClapTrap " << _name << " cannoy repair himself because he is already dead" << std::endl;
	else
		std::cout << "ClapTrap " << _name << "doesn't have enough EP to repair himself" << std::endl;
}
