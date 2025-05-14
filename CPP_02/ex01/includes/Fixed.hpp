/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:41:21 by phautena          #+#    #+#             */
/*   Updated: 2025/05/14 14:24:39 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int					_n;
		static const int	_bits = 8;

	public:
		Fixed(void);
		Fixed(const int n_integer);
		Fixed(const float n_float);
		~Fixed(void);
		Fixed(Fixed const & src);
		Fixed&	operator=(Fixed const & rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	};

std::ostream&	operator<<(std::ostream& os, const Fixed &copy);
