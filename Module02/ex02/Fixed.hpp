/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:23:56 by scass             #+#    #+#             */
/*   Updated: 2021/08/17 13:29:54 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int 	fixvalue;
	const static int bits=8;
public:
	Fixed();
	Fixed(const int intvalue);
	Fixed(const float floatvalue);
	Fixed(const Fixed& copy);
	~Fixed();

	/* Overloads */
	Fixed& operator=(const Fixed& fixed);
	Fixed& operator+=(const Fixed& fixed);	
	bool operator>(const Fixed& fixed) const;
	bool operator<(const Fixed& fixed) const;
	bool operator>=(const Fixed& fixed) const;
	bool operator<=(const Fixed& fixed) const;
	bool operator==(const Fixed& fixed) const;
	bool operator!=(const Fixed& fixed) const;
	Fixed operator+(const Fixed& fixed) const; 
	Fixed operator-(const Fixed& fixed) const;
	Fixed operator*(const Fixed& fixed) const;
	Fixed operator/(const Fixed& fixed) const;
	/*preincrement*/
	Fixed& operator++();						
	Fixed& operator--();
	/*postincrement*/						
	Fixed operator++(int);				
	Fixed operator--(int);			
	
	/*Member functions*/	
	int getRawBits(void) const;
	void setRawBits(const int raw);
	int toInt() const;
	float toFloat() const;

	/*Static member functions*/
	static Fixed& min(Fixed& fix_value1, Fixed& fix_value2);
	static const Fixed& min(const Fixed& fix_value1, const Fixed& fix_value2);
	static Fixed& max(Fixed& fix_value1, Fixed& fix_value2);
	static const Fixed& max(const Fixed& fix_value1, const Fixed& fix_value2);


};

std::ostream& operator<<(std::ostream& out, const Fixed& fix);

#endif