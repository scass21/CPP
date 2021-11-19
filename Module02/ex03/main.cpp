/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:22:23 by scass             #+#    #+#             */
/*   Updated: 2021/08/17 13:34:17 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

#define COLOR "\033[0m\033[33m"
#define RESET "\033[0m"

int main() 
{
	Point a(9.2f, 4.6f);
	Point b(4.6f, 3.3f);
	Point c(8.3f, 7.2f);
	Point p_out(5.1f, 2.1f);
	Point p_in(7.5f, 5.1f);
	
	std::cout << "Coordinates of the triangle: a(x= " << a.getPointX() << ", y= " << a.getPointY() << ")" << std::endl;
	std::cout << "Coordinates of the triangle: b(x= " << b.getPointX() << ", y= " << b.getPointY() << ")" << std::endl;
	std::cout << "Coordinates of the triangle: c(x= " << c.getPointX() << ", y= " << c.getPointY() << ")" << std::endl;
	std::cout << "Coordinates of the point: p(x= " << p_out.getPointX() << ", y= " << p_out.getPointY() << ")" << std::endl;
	std::cout << COLOR << "Result " << RESET << (bsp(a, b, c, p_out) ? "True" : "False") << std::endl;
	std::cout << "Coordinates of the point: p(x= " << p_in.getPointX() << ", y= " << p_in.getPointY() << ")" << std::endl;
	std::cout << COLOR << "Result " << RESET << (bsp(a, b, c, p_in) ? "True" : "False") << std::endl;
	return (0);
}
