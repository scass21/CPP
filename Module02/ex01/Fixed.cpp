/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 22:24:39 by scass             #+#    #+#             */
/*   Updated: 2021/08/14 14:17:11 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixvalue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intvalue)
{
	this->fixvalue = intvalue << bits;
	std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed(const float floatvalue)
{
	this->fixvalue = (int)roundf(floatvalue * (1 << bits));
	std::cout << "Float Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Assignation Operator called" << std::endl;
	if (&fixed == this)
		return (*this);
	this->fixvalue = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	return (this->fixvalue);
}

void Fixed::setRawBits(int const raw)
{
	this->fixvalue = raw;
}

int Fixed::toInt(void) const
{
	return (this->fixvalue >> bits);
}


float Fixed::toFloat(void) const
{
	return (this->fixvalue / (float)(1 << bits));
}

std::ostream& operator<<(std::ostream& out, const Fixed& fix)
{
	out << fix.toFloat();
	return (out);
}