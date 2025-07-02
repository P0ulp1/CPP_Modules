/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:34:53 by phautena          #+#    #+#             */
/*   Updated: 2025/07/02 13:39:26 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

int	main(void)
{
	Point	p1(0.0f, 0.0f);
	Point	p2(10.0f, 30.0f);
	Point	p3(20.0f, 0.0f);
	Point	pX(30.0f, 15.0f);

	if (bsp(p1, p2, p3, pX) == true)
		std::cout << "Point is in triangle" << std::endl;
	else
		std::cout << "Point is NOT in triangle" << std::endl;
}
