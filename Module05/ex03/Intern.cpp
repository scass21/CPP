/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:51:23 by scass             #+#    #+#             */
/*   Updated: 2021/09/02 21:57:00 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& copy)
{
	*this = copy;
}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return (*this);
}

Intern::~Intern()
{
}

Form* Intern::makeForm(std::string form, std::string target)
{
	Form* function = NULL;
	(form.find("Shrubbery") != std::string::npos) && (function = new ShrubberyCreationForm(target));
	(form.find("Robotomy") != std::string::npos) && (function = new RobotomyRequestForm(target));
	(form.find("Presidential") != std::string::npos) && (function = new PresidentialPardonForm(target));
	(function == NULL) ? throw UnknownFormException() : std::cout << "\033[33mIntern creates " << function->getName() << "\033[0m" << std::endl;
	return (function);
}

const char* Intern::UnknownFormException::what(void) const throw()
{
	return "\033[31mException:\033[0m Unknown Form ";
}
