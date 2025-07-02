/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:36:10 by phautena          #+#    #+#             */
/*   Updated: 2025/07/02 13:07:51 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "../includes/Fixed.hpp"

class	Point
{
	private:
		Fixed	_x;
		Fixed	_y;

	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point& copy);
		Point&	operator=(const Point& rhs);
		~Point(void);

		Fixed	getX(void) const;
		Fixed	getY(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
