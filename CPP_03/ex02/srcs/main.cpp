/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:17:29 by phautena          #+#    #+#             */
/*   Updated: 2025/07/01 14:01:16 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int	main(void)
{
	FragTrap	bob("Bob");
	FragTrap	arnold("Arnold");

	bob.takeDamage(50);
	arnold = bob;
	arnold.beRepaired(50);
	arnold.highFiveGuys();

	return (0);
}
