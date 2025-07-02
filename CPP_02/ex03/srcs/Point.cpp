/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:38:35 by phautena          #+#    #+#             */
/*   Updated: 2025/07/02 13:21:28 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	// std::cout << "Point default constructor called" << std::endl;
}


Point::Point(const float x, const float y) : _x(x), _y(y)
{
	// std::cout << "Point parameterized constructor called" << std::endl;
}

Point::Point(const Point& copy)
{
	// std::cout << "Point copy constructor called" << std::endl;
	_x = copy._x;
	_y = copy._y;
}

Point&	Point::operator=(const Point& rhs)
{
	// std::cout << "Point assignement operator overload called" << std::endl;
	if (this != &rhs)
	{
		_x = rhs._x;
		_y = rhs._y;
	}
	return (*this);
}

Point::~Point(void)
{
	// std::cout << "Point destructor called" << std::endl;
}

Fixed	Point::getX(void) const
{
	return (_x);
}

Fixed	Point::getY(void) const
{
	return (_y);
}
