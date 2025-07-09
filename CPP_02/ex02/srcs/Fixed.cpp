/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:41:23 by phautena          #+#    #+#             */
/*   Updated: 2025/07/08 13:28:01 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void) : _n(0)
{
	std::cout << "Fixed default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : _n(value << _bits)
{
	std::cout << "Fixed int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _n(static_cast<int>(roundf(value * (1 << _bits))))
{
	std::cout << "Fixed float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Fixed destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Fixed copy constructor called" << std::endl;
	_n = copy._n;
}

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Fixed assignement operator overload called" << std::endl;
	if (this != &rhs)
	{
		_n = rhs._n;
	}
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_n);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_n = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(_n) / (1 << _bits));
}

int		Fixed::toInt(void) const
{
	return (_n >> _bits);
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	return (_n > rhs._n);
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return (_n < rhs._n);
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return (_n >= rhs._n);
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return (_n <= rhs._n);
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return (_n == rhs._n);
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return (_n != rhs._n);
}

Fixed	Fixed::operator+(const Fixed &rhs)
{
	Fixed	res(this->toFloat() + rhs.toFloat());
	return (res);
}

Fixed	Fixed::operator-(const Fixed &rhs)
{
	Fixed	res(this->toFloat() - rhs.toFloat());
	return (res);
}

Fixed	Fixed::operator*(const Fixed &rhs)
{
	Fixed	res(this->toFloat() * rhs.toFloat());
	return (res);
}

Fixed	Fixed::operator/(const Fixed &rhs)
{
	Fixed	res(this->toFloat() / rhs.toFloat());
	return (res);
}

Fixed	&Fixed::operator++()
{
	this->_n++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	this->_n++;
	return (temp);
}

Fixed	&Fixed::operator--()
{
	this->_n--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	this->_n--;
	return (temp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (&a == &b)
	{
		std::cout << "Same instance, returning first instance" << std::endl;
		return (a);
	}
	if (a > b)
		return (b);
	return (a);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (&a == &b)
	{
		std::cout << "Same instance, returning first instance" << std::endl;
		return (a);
	}
	if (a > b)
		return (b);
	return (a);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (&a == &b)
	{
		std::cout << "Same instance, returning first instance" << std::endl;
		return (a);
	}
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (&a == &b)
	{
		std::cout << "Same instance, returning first instance" << std::endl;
		return (a);
	}
	if (a > b)
		return (a);
	return (b);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &rhs)
{
	os << rhs.toFloat() << "djwioajdoiwajdiowajd";
	return (os);
}

a = 3;
a++;

a_copy = 3;

a = 4;
