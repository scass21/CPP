/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:19:42 by scass             #+#    #+#             */
/*   Updated: 2021/09/02 23:00:44 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	const int			sign_grade;
	const int			execute_grade;
	bool				sign;
public:
	Form();
	Form(std::string name, int sign_grade, int execute_grade);
	Form(const Form& copy);
	Form& operator=(const Form& other);
	~Form();

	std::string getName() const;
	int	getSignGrade() const;
	int getExecuteGrade() const;
	bool getSign() const;
	void beSign(const Bureaucrat& bure);

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

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif