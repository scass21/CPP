/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 22:02:24 by scass             #+#    #+#             */
/*   Updated: 2021/09/07 10:01:54 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char **argv) 
{
	if (argc != 2) 
	{
		std::cerr << RED <<"Error: Enter: ./convert value" << RESET << std::endl;
		return 1;
	}
	std::string value = argv[1];
	double 		tmp_val;
	
	std::cout << BLUE << "The entered value: " << value << RESET << std::endl;
	if(value.length() == 1 && !std::isdigit(value[0]))
		tmp_val = static_cast<int>(value[0]);
	else
		tmp_val = atof(argv[1]);
	/* print char */
	if (value.length() >= 3 && !std::isdigit(value[0]))
		std::cout << RED << "char: impossible" << RESET << std::endl;
	else if((tmp_val < 127 && tmp_val > 31))
		std::cout << YELL << "char: '" << static_cast<char>(tmp_val) << "'" << RESET << std::endl;
	else
		std::cout << RED << "char: Non displayable" << RESET << std::endl;
	/* print int */
	if ((value.length() >= 3 && !std::isdigit(value[0])) || tmp_val > std::numeric_limits<int>::max() || tmp_val < std::numeric_limits<int>::min())
		std::cout << RED << "int: impossible" << RESET << std::endl;
	else
		std::cout << YELL << "int: " << static_cast<int>(tmp_val) << RESET << std::endl;
	std::cout << YELL << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(tmp_val) << "f" << RESET << std::endl;
    std::cout << YELL << "double: " << static_cast<double>(tmp_val) << RESET << std::endl;

	return 0;
}