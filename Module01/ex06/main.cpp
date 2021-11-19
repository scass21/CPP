/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 01:10:54 by scass             #+#    #+#             */
/*   Updated: 2021/08/08 23:45:35 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen			karen;
	std::string 	level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	if (argc != 2)
	{
		std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}
	std::string 	user_input = argv[1];
	int 			i = 0;
	while(i < 4 && user_input.compare(level[i]) != 0 )
		i++;
	switch (i)
	{
	case 0:
		std::cout << "[ DEBUG ]" << std::endl;
		karen.complain("DEBUG");
		std::cout << std::endl;
	case 1:
		std::cout << "[ INFO ]" << std::endl;
		karen.complain("INFO");
		std::cout << std::endl;
	case 2:
		std::cout << "[ WARNING ]" << std::endl;
		karen.complain("WARNING");
		std::cout << std::endl;
	case 3:
		std::cout << "[ ERROR ]" << std::endl;
		karen.complain("ERROR");
		std::cout << std::endl;
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
    return (0);
}