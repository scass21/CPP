/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 12:41:20 by scass             #+#    #+#             */
/*   Updated: 2021/09/02 10:33:23 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() 
{
	std::cout << "\033[33mPresidential Pardon Form \033[0m" << std::endl;
	Bureaucrat bob(20, "Bob");
	std::cout << bob;
	Bureaucrat Kate(4, "Kate");
	std::cout << Kate;
	PresidentialPardonForm	criminal("Criminal");
	std::cout << criminal;
	try
	{
		bob.signForm(criminal);
		bob.executeForm(criminal);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Kate.signForm(criminal);
		Kate.executeForm(criminal);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\033[33mRobotomy Request Form \033[0m" << std::endl;
	Bureaucrat gery(20, "Gery");
	std::cout << gery;
	Bureaucrat Gin(50, "Gin");
	std::cout << Gin;
	RobotomyRequestForm	robot("Robot");
	std::cout << robot;
	try
	{
		gery.signForm(robot);
		gery.executeForm(robot);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Gin.signForm(robot);
		Gin.executeForm(robot);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\033[33mShrubbery Creation Form \033[0m" << std::endl;
	Bureaucrat Tom(20, "Tom");
	std::cout << Tom;
	Bureaucrat mary(140, "Mary");
	std::cout << mary;
	ShrubberyCreationForm	home("home");
	std::cout << home;
	try
	{
		Tom.signForm(home);
		Tom.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		mary.signForm(home);
		mary.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}