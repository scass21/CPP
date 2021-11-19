/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 00:08:49 by scass             #+#    #+#             */
/*   Updated: 2021/11/19 10:21:33 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

class Awesome
{
public:
		Awesome(void): _n(42) {return;}
		int get(void) const {return this->_n;}
private:
		int _n;
};

std::ostream& operator<<(std::ostream& out,  Awesome const & rhs)
{
	out << rhs.get();
	return out;
};

int main( void ) 
{
	std::cout << "\033[33mINT\033[0m" << " ";
	int int_array[] = {1, 5, 265, 45, 87, 123};
	iter(int_array, 6, print_array);
	
	std::cout << "\033[33m\nSTRING\033[0m" << " ";
	std::string string_array[] = {"str_1", "str_2", "str_3"};
	iter(string_array, 3, print_array);

	std::cout << "\033[33m\nFLOAT\033[0m" << " ";
	float float_array[] = {1.05f, 5.45f, 2.65f, 45.01f, 87.02f, 1.23f};
	iter(float_array, 6, print_array);

	std::cout << "\033[33m\nCHAR\033[0m" << " ";
	char char_array[] = {'a', 'b', '#'};
	iter(char_array, 3, print_array);

	std::cout << "\033[33m\nAWESOME\033[0m" << std::endl;
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);

	return 0;
}