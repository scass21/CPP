/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 23:38:24 by scass             #+#    #+#             */
/*   Updated: 2021/09/08 11:47:38 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

class Base
{
private:
		int x;
public:
		Base(int x): x(x) {}
		bool operator>(const Base& base) const
		{
			return(x > base.x);
		}
		bool operator<(const Base& base) const
		{
			return(x < base.x);
		}
		int getX() const 
		{
			return (this->x);
		}
};

std::ostream& operator<<(std::ostream& out, const Base& base)
{
	out << base.getX();
	return out;
};

int main() 
{
	std::cout << "\033[33mINT\033[0m" << std::endl;
	int a = 2;
	int b = 3;
	swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::cout << "\033[33mSTRING\033[0m" << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "\033[33mFLOAT\033[0m" << std::endl;
	float e = 2.04;
	float f = 1.05;
	swap( e, f );
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

	std::cout << "\033[33mCHAR\033[0m" << std::endl;
	char g = 'g';
	char h = 'h';
	swap( g, h );
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
	std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;

	std::cout << "\033[33mBASE\033[0m" << std::endl;
	Base i(45);
	Base j(20);
	swap( i, j);
	std::cout << "i = " << i << ", j = " << j << std::endl;
	std::cout << "min( i, j ) = " << ::min( i, j ) << std::endl;
	std::cout << "max( i, j ) = " << ::max( i, j ) << std::endl;
	
	return 0;
}