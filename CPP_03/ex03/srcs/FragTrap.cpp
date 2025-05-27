/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:02:40 by phautena          #+#    #+#             */
/*   Updated: 2025/05/20 16:14:19 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	_name = "default";
	_hp = 100;
	_ep = 100;
	_atk = 30;
	std::cout << "FragTrap " << _name << " has been assembled" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_hp = 100;
	_ep = 100;
	_atk = 30;
	std::cout << "FragTrap " << _name << " has been assembled" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << _name << " has gone back to where it came from (a pile of scrap)" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{

}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
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

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " proposes a high five to celebrate the latests frags! The whole is team is now in a good mood" << std::endl;
}
