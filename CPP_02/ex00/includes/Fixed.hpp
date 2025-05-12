/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:41:21 by phautena          #+#    #+#             */
/*   Updated: 2025/05/12 15:50:11 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Fixed
{
	private:
		int					_n;
		static int const	_b;

	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed& const src);
		Fixed&	operator=(Fixed& const rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
