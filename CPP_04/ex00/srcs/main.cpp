/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:30:23 by phautena          #+#    #+#             */
/*   Updated: 2025/12/04 18:19:41 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	// const WrongAnimal* k = new WrongAnimal();
	// const WrongAnimal* l = new WrongCat();

	// std::cout << k->getType() << " " << std::endl;
	// std::cout << l->getType() << " " << std::endl;
	// k->makeSound();
	// l->makeSound();

	delete meta;
	delete j;
	delete i;
	// delete k;
	// delete l;

	return (0);
}
