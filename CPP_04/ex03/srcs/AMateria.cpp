/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:21:12 by phautena          #+#    #+#             */
/*   Updated: 2025/05/27 16:47:23 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria(void) : _type("null")
{
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria paramterized constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	_type = copy._type;
}

AMateria	&AMateria::operator=(const AMateria &rhs)
{
	std::cout << "AMateria assignement operator overload called" << std::endl;
	if (this != &rhs)
	{
		_type = rhs._type;
	}
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const	&AMateria::getType(void) const
{
	return (_type);
}
