/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:41:23 by phautena          #+#    #+#             */
/*   Updated: 2025/05/14 15:46:04 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void): _n(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n_integer)
{
	// std::cout << "Int constructor called" << std::endl;
	_n = n_integer << _bits;
}

Fixed::Fixed(const float n_float)
{
	// std::cout << "Float constructor called" << std::endl;
	_n = roundf(n_float * (1 << _bits));
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed&	Fixed::operator=(Fixed const & rhs)
{
	// std::cout << "Copy assignement operator called" << std::endl;
	if (this != &rhs)
		this->_n = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const & rhs)
{
	return (this->toFloat() > rhs.toFloat());
}

bool	Fixed::operator<(Fixed const & rhs)
{
	return (this->toFloat() < rhs.toFloat());
}

bool	Fixed::operator>=(Fixed const & rhs)
{
	return (this->toFloat() >= rhs.toFloat());
}

bool	Fixed::operator<=(Fixed const & rhs)
{
	return (this->toFloat() <= rhs.toFloat());
}

bool	Fixed::operator==(Fixed const & rhs)
{
	return (this->toFloat() == rhs.toFloat());
}

bool	Fixed::operator!=(Fixed const & rhs)
{
	return (this->toFloat() != rhs.toFloat());
}

Fixed	Fixed::operator+(Fixed const & rhs)
{
	Fixed	result = this->toFloat() + rhs.toFloat();
	return (result);
}

Fixed	Fixed::operator-(Fixed const & rhs)
{
	Fixed	result = this->toFloat() - rhs.toFloat();
	return (result);
}

Fixed	Fixed::operator*(Fixed const & rhs)
{
	Fixed	result = this->toFloat() * rhs.toFloat();
	return (result);
}

Fixed	Fixed::operator/(Fixed const & rhs)
{
	Fixed	result = this->toFloat() / rhs.toFloat();
	return (result);
}

Fixed&	Fixed::operator++()
{
	this->_n++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = (*this);
	++(this->_n);
	return (temp);
}

Fixed&	Fixed::operator--()
{
	this->_n--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	--(this->_n);
	return (temp);
}

Fixed&	Fixed::min(Fixed& n1, Fixed& n2)
{
	if (n1.getRawBits() >= n2.getRawBits())
		return (n2);
	else
		return (n1);
}

const Fixed&	Fixed::min(const Fixed& n1, const Fixed& n2)
{
	if (n1.getRawBits() >= n2.getRawBits())
		return (n2);
	else
		return (n1);
}

Fixed&	Fixed::max(Fixed& n1, Fixed& n2)
{
	if (n1.getRawBits() >= n2.getRawBits())
		return (n1);
	else
		return (n2);
}

const	Fixed&	Fixed::max(const Fixed& n1, const Fixed& n2)
{
	if (n1.getRawBits() >= n2.getRawBits())
		return (n1);
	else
		return (n2);
}

int	Fixed::getRawBits(void) const
{
	return (this->_n);
}

void	Fixed::setRawBits(int const raw)
{
	this->_n = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)_n / (1 << _bits);
}

int	Fixed::toInt(void) const
{
	return (_n >> _bits);
}

std::ostream&	operator<<(std::ostream& os, const Fixed &copy)
{
	os << copy.toFloat();
	return (os);
}

