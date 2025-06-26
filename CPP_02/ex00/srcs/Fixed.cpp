/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:41:23 by phautena          #+#    #+#             */
/*   Updated: 2025/06/26 14:28:44 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void) : _n(0)
{
	std::cout << "Fixed default constructor called" << std::endl;
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
