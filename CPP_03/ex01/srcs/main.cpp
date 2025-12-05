/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:17:29 by phautena          #+#    #+#             */
/*   Updated: 2025/11/28 18:10:17 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int	main(void)
{
	ClapTrap	pierre("Pierre");
	ScavTrap	bob("Bob");
	bob.attack("Pierre");

	// ScavTrap	arnold("Arnold");

	// bob.takeDamage(50);
	// arnold = bob;
	// arnold.beRepaired(50);
	// arnold.guardGate();

	return (0);
}
