/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:41:21 by phautena          #+#    #+#             */
/*   Updated: 2025/05/14 13:38:20 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Fixed
{
	private:
		int					_n;
		static const int	_bits = 8;

	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const & src);
		Fixed&	operator=(Fixed const & rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
