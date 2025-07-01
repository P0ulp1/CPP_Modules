/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:05:10 by phautena          #+#    #+#             */
/*   Updated: 2025/07/01 15:02:47 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Default_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	_name = "Default";
	_hp = FragTrap::_hp;
	_ep = ScavTrap::_ep;
	_atk = FragTrap::_atk;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap parameterized constructor called" << std::endl;
	_name = name;
	_hp = FragTrap::_hp;
	_ep = ScavTrap::_ep;
	_atk = FragTrap::_atk;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ScavTrap(copy), FragTrap(copy)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& rhs)
{
	if (this != &rhs)
	{
		FragTrap::operator=(rhs);
		ScavTrap::operator=(rhs);
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << _name << "   ClapTrap name: " << ClapTrap::_name << std::endl;
}
