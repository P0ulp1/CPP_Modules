/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:41:25 by phautena          #+#    #+#             */
/*   Updated: 2025/05/14 14:28:49 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const	b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as Integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as Integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as Integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as Integer" << std::endl;

	return (0);
}
