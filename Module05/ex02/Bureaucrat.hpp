/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 12:42:24 by scass             #+#    #+#             */
/*   Updated: 2021/09/02 22:54:01 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	name;
	int			grade;
public:
	Bureaucrat();
	Bureaucrat(int grade, std::string name);
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat& operator=(const Bureaucrat& other);
	~Bureaucrat();

	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(Form& form);
	void executeForm(Form const & form);
	class GradeTooHighException: public std::exception 
	{
	public:
		const char* what(void) const throw();
	};
	class GradeTooLowException: public std::exception 
	{
	public:
		const char* what(void) const throw();
	};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif