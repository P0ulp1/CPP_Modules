/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 13:12:59 by phautena          #+#    #+#             */
/*   Updated: 2025/10/14 15:01:35 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span(void) : _n(0)
{
	// std::cout << "Span default constructor has been called" << std::endl;
}

Span::~Span(void)
{
	// std::cout << "Span default destructor has been called" << std::endl;
}

Span::Span(unsigned int n) : _n(n)
{
	// std::cout << "Span parameterized constructor has been called" << std::endl;
}

Span::Span(const Span &copy) : _n(copy._n)
{
	// std::cout << "Span copy constructor called" << std::endl;
	for (std::list<int>::iterator it = _numbers.begin(); it != _numbers.end(); it++)
		_numbers.push_back(*it);
}

Span	&Span::operator=(const Span &rhs)
{
	// std::cout << "Span assignement operator overload called" << std::endl;
	if (this != &rhs)
	{
		_n = rhs._n;
		for (std::list<int>::iterator it = _numbers.begin(); it != _numbers.end(); it++)
			_numbers.push_back(*it);
	}
	return (*this);
}

void	Span::addNumbers(int n)
{
	if (_n == _numbers.size())
		throw SpanFull();
	_numbers.push_back(n);
}

int		Span::shortestSpan(void)
{
	int	lowest = *(_numbers.begin());
	int	second_lowest = INT_MAX;

	if (_numbers.size() < 2)
		throw OnlyOneElement();

	for (std::list<int>::iterator it = _numbers.begin(); it != _numbers.end(); it++)
	{
		if (*it < lowest)
			lowest = *it;
	}

	for (std::list<int>::iterator it = _numbers.begin(); it != _numbers.end(); it++)
	{
		if (*it > lowest && *it < second_lowest)
			second_lowest = *it;
	}

	return (second_lowest - lowest);
}

int		Span::longestSpan(void)
{
	int	lowest = *(_numbers.begin());
	int	highest = INT_MIN;

	if (_numbers.size() < 2)
		throw OnlyOneElement();

	for (std::list<int>::iterator it = _numbers.begin(); it != _numbers.end(); it++)
	{
		if (*it < lowest)
			lowest = *it;
	}

	for (std::list<int>::iterator it = _numbers.begin(); it != _numbers.end(); it++)
	{
		if (*it > highest)
			highest = *it;
	}

	return (highest - lowest);
}

void	Span::generateNumbers(std::list<int>::iterator first, std::list<int>::iterator last)
{
	if (distance(first, last) + _numbers.size() > _n)
		throw SpanFull();
	_numbers.insert(_numbers.end(), first, last);
}

const char	*Span::SpanFull::what() const throw()
{
	return ("Cannot add a new number to the span because it's full");
}

const char	*Span::OnlyOneElement::what() const throw()
{
	return ("Cannot calculate range because the span only contains zero/one element");
}

