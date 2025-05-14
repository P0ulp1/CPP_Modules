/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:41:23 by phautena          #+#    #+#             */
/*   Updated: 2025/05/14 14:29:03 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void): _n(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed&	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &rhs)
		this->_n = rhs.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Fixed &copy)
{
	os << copy.toFloat();
	return (os);
}

int	Fixed::getRawBits(void) const
{
	return (this->_n);
}

void	Fixed::setRawBits(int const raw)
{
	this->_n = raw;
}

Fixed::Fixed(const int n_integer)
{
	std::cout << "Int constructor called" << std::endl;
	_n = n_integer << _bits;
}

Fixed::Fixed(const float n_float)
{
	std::cout << "Float constructor called" << std::endl;
	_n = roundf(n_float * (1 << _bits));
}

float	Fixed::toFloat(void) const
{
	return (float)_n / (1 << _bits);
}

int	Fixed::toInt(void) const
{
	return (_n >> _bits);
}

