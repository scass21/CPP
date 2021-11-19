/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:23:56 by scass             #+#    #+#             */
/*   Updated: 2021/08/11 18:16:00 by scass            ###   ########.fr       */
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
	Fixed& operator=(const Fixed& fixed);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(const int raw);
	int toInt() const;
	float toFloat() const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fix);

#endif