/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p0ulp1 <p0ulp1@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 14:14:16 by p0ulp1            #+#    #+#             */
/*   Updated: 2025/05/31 14:51:50 by p0ulp1           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form(void) : _name("null"), _signed(false), _gradeSign(1), _gradeExec(1)
{
	std::cout << "Form constructor called" << std::endl;
}

Form::Form(const std::string name, const int gradeSign, const int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	std::cout << "Form parameterized constructor called" << std::endl;
	_signed = false;
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
	else if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException();
}

Form::Form(const Form &copy) : _name(copy._name), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec)
{
	std::cout << "Form copy constructor called" << std::endl; 
	_signed = copy._signed;
}

Form	&Form::operator=(const Form &rhs)
{
	std::cout << "Form assignement operator overload called" << std::endl;
	if (this != &rhs)
		_signed = rhs._signed;
	return (*this);
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
}

std::string	Form::getName(void) const
{
	return (_name);
}

bool	Form::getSigned(void) const
{
	return (_signed);
}

int	Form::getGradeSign(void) const
{
	return (_gradeSign);
}

int	Form::getGradeExec(void) const
{
	return (_gradeExec);
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= _gradeSign)
		_signed = true;
	else
		throw GradeTooLowException();
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("The grade of the form is too high");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("The grade of the form is too low");
}

std::ostream	&operator<<(std::ostream &os, const Form &rhs)
{
	os << rhs.getName() << " requires grade " << rhs.getGradeSign() << " to be signed and grade " << rhs.getGradeExec() << " to be executed. Signed: ";
	if (rhs.getSigned() == true)
		os << "Yes";
	else
		os << "No";
	os << std::endl;
	return (os);
}