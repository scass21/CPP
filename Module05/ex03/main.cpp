/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 12:41:20 by scass             #+#    #+#             */
/*   Updated: 2021/09/02 21:46:03 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() 
{
	Intern intern;
	Form* 	form;
	Bureaucrat gim(5, "Gim");
	std::cout << gim;
	try
	{
		form = intern.makeForm("Shrubbery form", "home");
		std::cout << *form;
		gim.signForm(*form);
		gim.executeForm(*form);
		delete (form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		form = intern.makeForm("Presidential form", "president");
		std::cout << *form;
		gim.signForm(*form);
		gim.executeForm(*form);
		delete (form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		form = intern.makeForm("Robotomy form", "robot");
		std::cout << *form;
		gim.signForm(*form);
		gim.executeForm(*form);
		delete (form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		form = intern.makeForm("Wrong form", "robot");
		std::cout << form;
		gim.signForm(*form);
		gim.executeForm(*form);
		delete (form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}