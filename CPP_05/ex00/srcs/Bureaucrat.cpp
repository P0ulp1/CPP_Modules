/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:53:37 by phautena          #+#    #+#             */
/*   Updated: 2025/08/01 13:20:58 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("null"), _grade(150)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat paramterized constructor called" << std::endl;
	if (grade > 150)
		throw GradeTooLow();
	else if (grade < 1)
		throw GradeTooHigh();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name)
{
	_grade = copy._grade;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	std::cout << "Bureaucrat assignement operator overload called" << std::endl;
	if (this != &copy)
		_grade = copy._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void	Bureaucrat::increaseGrade(void)
{
	if (_grade == 1)
		throw GradeTooHigh();
	else
		_grade--;
}

void	Bureaucrat::decreaseGrade(void)
{
	if (_grade == 150)
		throw GradeTooLow();
	else
		_grade++;
}

const char	*Bureaucrat::GradeTooHigh::what() const throw()
{
	return ("The grade assigned is too high");
}

const char	*Bureaucrat::GradeTooLow::what() const throw()
{
	return ("The grade assigned is too low");
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &copy)
{
	os << copy.getName() << ", bureaucrat grade " << copy.getGrade() << std::endl;
	return (os);
}


