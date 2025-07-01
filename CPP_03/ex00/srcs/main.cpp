/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:17:29 by phautena          #+#    #+#             */
/*   Updated: 2025/07/01 12:18:23 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	bob("Bob");

	bob.attack("Piece of junk");
	bob.takeDamage(2);
	bob.beRepaired(2);

	return (0);
}
