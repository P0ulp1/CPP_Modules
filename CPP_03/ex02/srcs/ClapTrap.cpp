/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:07:03 by phautena          #+#    #+#             */
/*   Updated: 2025/07/01 13:49:52 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hp(10), _ep(10), _atk(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hp(10), _ep(10), _atk(0)
{
	std::cout << "ClapTrap parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	_name = copy._name;
	_hp = copy._hp;
	_ep = copy._ep;
	_atk = copy._atk;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs)
{
	std::cout << "ClapTrap assignement operator overload called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_hp = rhs._hp;
		_ep = rhs._ep;
		_atk = rhs._atk;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_ep > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << " with " << _atk << "ATK" << std::endl;
		_ep--;
	}
	else
		std::cout << "ClapTrap " << _name << " doesn't have any EP left" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp > 0)
	{
		std::cout << "ClapTrap " << _name << " takes " << amount << "DMG" << std::endl;
		_hp -= amount;
	}
	else
		std::cout << "ClapTrap " << _name << " is already dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_ep > 0)
	{
		std::cout << "ClapTrap " << _name << " regains " << amount << "HP" << std::endl;
		_ep--;
	}
	else
		std::cout << "ClapTrap " << _name << " doesn't have an EP left" << std::endl;
}
