/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:20:42 by phautena          #+#    #+#             */
/*   Updated: 2025/05/27 17:06:55 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Character.hpp"
#include "../includes/ICharacter.hpp"

int	main(void)
{
	ICharacter	*cloud = new Character("Cloud");
	std::cout << "My name is " << cloud->getName() << std::endl;



	return (42);
}
