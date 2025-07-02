/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:38:18 by phautena          #+#    #+#             */
/*   Updated: 2025/07/02 13:39:09 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Fixed	vecprod(Point pt1, Point pt2, Point pt3)
{
	Fixed	res;

	res = (pt2.getX() - pt1.getX()) * (pt3.getY() - pt1.getY()) - (pt2.getY() - pt1.getY()) * (pt3.getX() - pt1.getX());
	return (res);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	ab_ap;
	Fixed	ca_cp;
	Fixed	bc_bp;

	ab_ap = vecprod(a, b, point);
	ca_cp = vecprod(c, a, point);
	bc_bp = vecprod(b, c, point);

	if ((ab_ap > 0 && ca_cp > 0 && bc_bp > 0)
		|| (ab_ap < 0 && ca_cp < 0 && bc_bp < 0))
		return (true);
	else
		return (false);
}
