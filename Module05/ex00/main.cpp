/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 12:41:20 by scass             #+#    #+#             */
/*   Updated: 2021/08/28 15:23:22 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() 
{
	Bureaucrat bob(150, "Bob");
	std::cout << bob;
	Bureaucrat kate(1, "Kate");
	std::cout << kate;

	std::cout << "\033[32mConstructors \033[0m" << std::endl;
	try
	{
		Bureaucrat ben(1000, "Ben");
		std::cout << ben;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\033[32mIncrement Grade \033[0m" << std::endl;
	try
	{
		bob.incrementGrade();
		std::cout << bob;
		kate.incrementGrade();
		std::cout << kate;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\033[32mDecrement Grade \033[0m" << std::endl;
	try
	{
		kate.decrementGrade();
		std::cout << kate;
		bob.decrementGrade();
		bob.decrementGrade();
		std::cout << bob;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}