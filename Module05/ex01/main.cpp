/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 12:41:20 by scass             #+#    #+#             */
/*   Updated: 2021/08/30 18:52:46 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() 
{
	Bureaucrat bob(100, "Bob");
	std::cout << bob;
	Bureaucrat kate(5, "Kate");
	std::cout << kate;
	Form		list("list", 25, 25);
	std::cout << list;

	try
	{
		Form		wronglist("wl", 160, 25);
		std::cout << wronglist;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "\033[32mThe bureaucrats are going to sign the form \033[0m" << std::endl;
	bob.signForm(list);
	kate.signForm(list);
	std::cout << list;	
	return (0);
}