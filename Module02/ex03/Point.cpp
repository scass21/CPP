/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 21:46:51 by scass             #+#    #+#             */
/*   Updated: 2021/08/17 13:36:32 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(const Point& copy)
{
	*this = copy;
}

Point::Point(const float x, const float y)
{
	this->x = x;
	this->y = y;
}

Point::~Point()
{
}

Fixed Point::getPointX() const
{
	return (this->x);
}

Fixed Point::getPointY() const
{
	return (this->y);
}

Point& Point::operator=(const Point& point)
{
	if (&point == this)
		return (*this);
	this->x = point.getPointX();
	this->y = point.getPointY();
	return (*this);
}

bool Point::operator==(const Point& point) const
{
	return ((this->x == point.getPointX() && this->y == point.getPointY()) ? true : false);
}

std::ostream& operator<<(std::ostream& out, const Point& point)
{
	Fixed tmpx;
	Fixed tmpy;
	tmpx = point.getPointX();
	tmpy = point.getPointY();
	out << tmpx.toFloat() << "\n";
	out << tmpy.toFloat() << "\n";
	return (out);
}