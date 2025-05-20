/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:53:48 by phautena          #+#    #+#             */
/*   Updated: 2025/05/20 15:53:41 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Bob("B0b");
	ClapTrap	Destructor("The D3struct0r");

	Destructor.attack("A random piece of junk");
	Bob.takeDamage(5);
	Bob.beRepaired(2);

	ClapTrap	Savior("S4vi0r");

	Savior.attack("Destructor");
	Savior.takeDamage(6);
	Savior.beRepaired(3);
	Savior.attack("Destructor");
}
