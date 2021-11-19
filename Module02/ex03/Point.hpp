/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 21:50:02 by scass             #+#    #+#             */
/*   Updated: 2021/08/17 13:11:39 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed x;
	Fixed y;
public:
	Point();
	Point(const Point& copy);
	Point(const float x, const float y);
	~Point();
	Fixed getPointX() const;
	Fixed getPointY() const;
	Point& operator=(const Point& point);
	bool operator==(const Point& point) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream& operator<<(std::ostream& out, const Point& point);
#endif