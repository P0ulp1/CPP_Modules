/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:53:48 by phautena          #+#    #+#             */
/*   Updated: 2025/05/20 16:35:59 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

int	main(void)
{
	ClapTrap	Bob("B0b");
	ScavTrap	Gerald("G3r4ld");
	FragTrap	Killer("K1ller");
	FragTrap	Killer2;

	Gerald.guardGate();
	Bob.attack("G3r4ld");
	Gerald.beRepaired(2);
	Gerald.attack("B0b");
	Killer.highFivesGuys();
	Killer2 = Killer;
	Killer2.attack("a damaged bot");
}
