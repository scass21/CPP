/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:22:23 by scass             #+#    #+#             */
/*   Updated: 2021/08/15 20:27:32 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#define COLOR "\033[0m\033[33m"
#define RESET "\033[0m"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << COLOR << "a=" << a << " b=" << b << RESET << std::endl;
	std::cout << COLOR << "a + b: " << RESET << a + b << std::endl;
	std::cout << COLOR << "++a: " << RESET << ++a << std::endl;
	std::cout << COLOR << "a++: " << RESET << a++ << " result: " << a << std::endl;
	std::cout << COLOR << "--a: " << RESET << --a << std::endl;
	std::cout << COLOR << "a--: " << RESET << a-- << " result: " << a << std::endl;
	std::cout << COLOR << "a - b: " << RESET << a - b << std::endl;
	a = 20;
	Fixed c(5);
	std::cout << COLOR << "a=" << a << " c=" << c << RESET << std::endl;
	std::cout << COLOR << "a * c: " << RESET << a * c << std::endl;
	std::cout << COLOR << "a / c: " << RESET << a / c << std::endl;
	std::cout << COLOR << "a=" << a << " b=" << b << " c=" << c << RESET << std::endl;
	std::cout << COLOR << "(a < b): " << RESET << ((a < b) ? "TRUE" : "FALSE") << std::endl;
	std::cout << COLOR << "(a > b): " << RESET << ((a > b) ? "TRUE" : "FALSE") << std::endl;
	std::cout << COLOR << "(a <= c): " << RESET << ((a <= c) ? "TRUE" : "FALSE") << std::endl;
	std::cout << COLOR << "(a >= c): " << RESET << ((a >= c) ? "TRUE" : "FALSE") << std::endl;
	std::cout << COLOR << "(a == c): " << RESET << ((a == c) ? "TRUE" : "FALSE") << std::endl;
	std::cout << COLOR << "(a != b): " << RESET << ((a != b) ? "TRUE" : "FALSE") << std::endl;
	std::cout << COLOR << "min( a, b ): " << RESET << Fixed::min( a, b ) << std::endl;
	std::cout << COLOR << "max( a, b ): " << RESET << Fixed::max( a, b ) << std::endl;
	return (0);
}
