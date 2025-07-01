/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:17:29 by phautena          #+#    #+#             */
/*   Updated: 2025/07/01 15:03:04 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	*bob = new DiamondTrap("Bob");
	bob->whoAmI();

	DiamondTrap	*test = new DiamondTrap();
	test->whoAmI();

	return (0);
}
