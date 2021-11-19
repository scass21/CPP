/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 21:09:58 by scass             #+#    #+#             */
/*   Updated: 2021/08/09 17:52:27 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "string: " << string << std::endl;
	std::cout << "The address in memory of the string: " << &string << std::endl;
	std::cout << "stringPTR: " << stringPTR << std::endl;	
	std::cout << "stringREF: " << &stringREF <<std::endl;
	std::cout << "The string using the pointer: " << *stringPTR << std::endl;
	std::cout << "The string using the reference: " << stringREF << std::endl;
}
