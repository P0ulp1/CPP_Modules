/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:41:23 by phautena          #+#    #+#             */
/*   Updated: 2025/06/05 17:12:53 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

//But : encoder un float en un e valeur entiere => VALEUR FIXE
//3.75 * 2^8 = 960.
//3 << 4 = 3 * 2^4 = 3 * 16 = 48
// 48 >> 4 = 48 / 2^4 = 48 / 16 = 3

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
		this->_n = rhs._n;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Fixed &copy)
{
	os << copy.toFloat();
	return (os);
}


Fixed	a(3.14f);
std::cout << a << std::endl;

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
	// n * 2^8 pour transformer mon int en valeur fixe
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

