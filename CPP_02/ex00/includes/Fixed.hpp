/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:41:21 by phautena          #+#    #+#             */
/*   Updated: 2025/06/26 14:28:54 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int					_n;
		static const int	_bits = 8;

	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &copy);
		Fixed	&operator=(const Fixed &rhs);
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
};

#endif
