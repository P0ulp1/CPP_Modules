/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:18:15 by phautena          #+#    #+#             */
/*   Updated: 2025/05/20 15:51:37 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	_name = "default";
	_hp = 100;
	_ep = 50;
	_atk = 20;
	std::cout << "ScavTrap " << _name << " has been created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_hp = 100;
	_ep = 50;
	_atk = 20;
	std::cout << "ScavTrap " << _name << " has been created" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << _name << "has been destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{

}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
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

void	ScavTrap::attack(const std::string &target)
{
	if (_ep >= 1 && _hp > 0)
	{
		_ep--;
		std::cout << "ScavTrap " << _name << " attacks " << target << " with great violence! (" << _atk << "ATK)" << std::endl;
	}
	else if (_hp <= 0)
		std::cout << "ScavTrap " << _name << " cannot attack because he is already dead" << std::endl;
	else
		std::cout << "ScavTrap " << _name << "cannot attack because he doesn't have any EP left" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " is now is gate keeping mode" << std::endl;
}
