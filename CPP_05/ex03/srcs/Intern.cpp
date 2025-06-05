/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:06:19 by phautena          #+#    #+#             */
/*   Updated: 2025/06/05 14:23:52 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	(void)copy;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern	&Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	std::cout << "Intern assignement operator overload called" << std::endl;
	return (*this);
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

AForm	*Intern::makeForm(std::string form, std::string target)
{
	std::string	cases[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	int	i = 0;
	while (i < 4)
	{
		if (cases[i] == form)
			break;
		i++;
	}

	switch(i)
	{
		case 0:
		{
			return (new PresidentialPardonForm(target));
			break;
		}
		case 1:
		{
			return (new RobotomyRequestForm(target));
			break;
		}
		case 2:
		{
			return (new ShrubberyCreationForm(target));
			break;
		}
		default:
			throw WrongFormName();
	}
}

const char	*Intern::WrongFormName::what() const throw()
{
	return ("The specified form name doesn't exist");
}

