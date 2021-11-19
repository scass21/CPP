/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 22:24:39 by scass             #+#    #+#             */
/*   Updated: 2021/08/17 13:30:21 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixvalue = 0;
}

Fixed::Fixed(const int intvalue)
{
	this->fixvalue = intvalue << bits;
}

Fixed::Fixed(const float floatvalue)
{
	this->fixvalue = (int)roundf(floatvalue * (1 << bits));
}

Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	if (&fixed == this)
		return (*this);
	this->fixvalue = fixed.getRawBits();
	return (*this);
}

Fixed& Fixed::operator+=(const Fixed& fixed)
{
	this->fixvalue += fixed.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(const Fixed& fixed) const
{
	Fixed sum = *this;
	sum += fixed;
	return (sum);
}

Fixed& Fixed::operator++()
{
	this->fixvalue++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed fix = *this;
	++*this;
	return fix;
}

Fixed Fixed::operator-(const Fixed& fixed) const
{
	Fixed res;

	res.setRawBits(this->fixvalue - fixed.getRawBits());
	return (res);
}

Fixed& Fixed::operator--() 
{
	this->fixvalue--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed fix = *this;
	--*this;
	return fix;
}

Fixed Fixed::operator*(const Fixed& fixed) const
{
	Fixed res;

	res.setRawBits((this->fixvalue * fixed.getRawBits()) / (1 << bits));
	return (res);
}

Fixed Fixed::operator/(const Fixed& fixed) const
{
	Fixed res;

	res.setRawBits((this->fixvalue / fixed.getRawBits()) * (1 << bits));
	return (res);
}

bool Fixed::operator==(const Fixed& fix) const
{
	return (this->fixvalue == fix.fixvalue);
}

bool Fixed::operator!=(const Fixed& fix) const
{
	return (this->fixvalue != fix.fixvalue);
}

bool Fixed::operator>(const Fixed& fix) const
{
	return (this->fixvalue > fix.fixvalue);
}

bool Fixed::operator<(const Fixed& fix) const
{
	return (this->fixvalue < fix.fixvalue);
}

bool Fixed::operator>=(const Fixed& fix) const
{
	return (this->fixvalue >= fix.fixvalue);
}

bool Fixed::operator<=(const Fixed& fix) const
{
	return (this->fixvalue <= fix.fixvalue);
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

Fixed& Fixed::min(Fixed& fix_value1, Fixed& fix_value2)
{
	return ((fix_value1 < fix_value2) ? fix_value1 : fix_value2);
}

const Fixed& Fixed::min(const Fixed& fix_value1, const Fixed& fix_value2)
{
	return ((fix_value1 < fix_value2) ? fix_value1 : fix_value2);
}

Fixed& Fixed::max(Fixed& fix_value1, Fixed& fix_value2)
{
	return ((fix_value1 > fix_value2) ? fix_value1 : fix_value2);
}

const Fixed& Fixed::max(const Fixed& fix_value1, const Fixed& fix_value2)
{
	return ((fix_value1 > fix_value2) ? fix_value1 : fix_value2);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fix)
{
	out << fix.toFloat();
	return (out);
}
