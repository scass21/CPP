/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 11:24:51 by scass             #+#    #+#             */
/*   Updated: 2021/08/17 11:35:52 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float vect_calc(Point p1, Point p2, Point point) 
{
	return (((p1.getPointX() - point.getPointX()) * (p2.getPointY() - p1.getPointY())) -
		((p2.getPointX() - p1.getPointX()) * (p1.getPointY() - point.getPointY()))).toFloat();
	
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (point == a || point == b || point == c)
		return (false);
	float v1 = vect_calc(a, b, point);
	float v2 = vect_calc(b, c, point);
	float v3 = vect_calc(c, a, point);
	if ((v1 > 0 && v2 > 0 && v3 > 0) || (v1 < 0 && v2 < 0 && v3 < 0))
		return (true);
	else
		return (false);
}