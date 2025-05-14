/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:54:09 by phautena          #+#    #+#             */
/*   Updated: 2025/05/14 16:29:13 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _atk(0)
{
	std::cout << "\nClapTrap " << _name << " just went out from the factory" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " has gone to the recycling factory" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_ep >= 1)
	{
		_ep--;
		std::cout << "ClapTrap " << _name << " attacks ClapTrap " << target << std::endl;
		std::cout << "ClapTrap " << target << " has lost " << _atk << "HP" << std::endl;
		std::cout << "ClapTrap " << _name << " has " << _ep << "EP remaining" << std::endl;\
	}
	else
	{
		std::cout << "ClapTrap " << _name << " doesn't have enough EP to attack " << target << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hp -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount << "DMG" << std::endl;
	if (amount > 0)
	{
		std::cout << "ClapTrap " << _name << " has now " << _hp << "HP" << std::endl;
	}
	else
	{
		std::cout << "This fatal blow cause ClapTrap " << _name << "to be destroyed... RIP" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{

	if (_ep >= 1)
	{
		--_ep;
		_hp += amount;
		std::cout << "ClapTrap " << _name << " opens his hatch and repairs himself" << std::endl;
		std::cout << "ClapTrap " << _name << " gains " << amount << "HP and therefore has now " << _hp << " HP in total" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << "doesn't have enough EP to repair himself" << std::endl;
	}
}
