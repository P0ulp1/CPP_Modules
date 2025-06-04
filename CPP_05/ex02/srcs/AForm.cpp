/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 14:14:16 by p0ulp1            #+#    #+#             */
/*   Updated: 2025/06/04 14:11:04 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"

AForm::AForm(void) : _name("null"), _signed(false), _gradeSign(1), _gradeExec(1)
{
	std::cout << "Form constructor called" << std::endl;
}

AForm::AForm(const std::string name, const int gradeSign, const int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	std::cout << "Form parameterized constructor called" << std::endl;
	_signed = false;
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
	else if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException();
}

AForm::AForm(const AForm &copy) : _name(copy._name), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec)
{
	std::cout << "AForm copy constructor called" << std::endl;
	_signed = copy._signed;
}

AForm	&AForm::operator=(const AForm &rhs)
{
	std::cout << "Form assignement operator overload called" << std::endl;
	if (this != &rhs)
		_signed = rhs._signed;
	return (*this);
}

AForm::~AForm(void)
{
	std::cout << "Form destructor called" << std::endl;
}

std::string	AForm::getName(void) const
{
	return (_name);
}

bool	AForm::getSigned(void) const
{
	return (_signed);
}

int	AForm::getGradeSign(void) const
{
	return (_gradeSign);
}

int	AForm::getGradeExec(void) const
{
	return (_gradeExec);
}

void	AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= _gradeSign)
		_signed = true;
	else
		throw GradeTooHighException();
}

void	AForm::execute(const Bureaucrat &executor) const
{
	if (_signed == false)
		throw FormNotSigned();
	else if (executor.getGrade() > _gradeSign)
		throw GradeTooHighException();
	else
		exec();
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("The grade of the form is too high");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("The grade of the form is too low");
}

const char	*AForm::FormNotSigned::what() const throw()
{
	return ("The form is not signed");
}

std::ostream	&operator<<(std::ostream &os, const AForm &rhs)
{
	os << rhs.getName() << " requires grade " << rhs.getGradeSign() << " to be signed and grade " << rhs.getGradeExec() << " to be executed. Signed: ";
	if (rhs.getSigned() == true)
		os << "Yes";
	else
		os << "No";
	os << std::endl;
	return (os);
}
