/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:30:23 by phautena          #+#    #+#             */
/*   Updated: 2025/05/26 14:48:34 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int	main(void)
{

	std::cout << "==============TABLE TEST==============" << std::endl;
	Animal*	tab[10];

	for (int i = 0; i < 5; i++)
		tab[i] = new Dog;
	for (int i = 5; i < 10; i++)
		tab[i] = new Cat;

	for (int i = 0; i < 10; i++)
		delete tab[i];

	std::cout << "==============IDEAS TEST==============" << std::endl;
	Cat*	a = new Cat;
	Dog*	b = new Dog;

	a->setIdeas(0, "Sleep");
	b->setIdeas(0, "Eat");

	std::cout << "Cats: " << a->getIdeas(0) << std::endl;
	std::cout << "Dogs: " << b->getIdeas(0) << std::endl;

	std::cout << "==============DEEP COPY==============" << std::endl;
	Cat*	c = new Cat(*a);
	std::cout << "Cat copy idea: " << c->getIdeas(0) << std::endl;

	delete a;
	delete b;
	delete c;

	return (0);
}
