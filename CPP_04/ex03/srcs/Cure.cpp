/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:34:32 by phautena          #+#    #+#             */
/*   Updated: 2025/05/27 16:51:16 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure	&Cure::operator=(const Cure &rhs)
{
	std::cout << "Cure assignement operator overload called" << std::endl;
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}

AMateria	*Cure::clone(void) const
{
	std::cout << "Cloning Cure Materia" << std::endl;
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
