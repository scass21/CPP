/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:51:39 by scass             #+#    #+#             */
/*   Updated: 2021/09/02 12:03:00 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern& copy);
	Intern& operator=(const Intern& other);
	~Intern();
	
	Form* makeForm(std::string form, std::string target);
	class UnknownFormException: public std::exception 
	{
	public:
		const char* what(void) const throw();
	};
};

#endif