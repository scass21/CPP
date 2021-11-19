/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:19:33 by scass             #+#    #+#             */
/*   Updated: 2021/09/02 23:02:53 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("default"), sign_grade(150), execute_grade(150), sign(false)
{
}

Form::Form(std::string name, int sign_grade, int execute_grade): name(name),
sign_grade(sign_grade), execute_grade(execute_grade), sign(false)
{
	if (this->sign_grade < 1 || this->execute_grade < 1)
		throw GradeTooHighException();
	if (this->sign_grade > 150 || this->execute_grade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& copy): name(copy.getName()),
sign_grade(copy.getSignGrade()), execute_grade(copy.getExecuteGrade()), sign(copy.getSign())
{
}

Form& Form::operator=(const Form& other)
{
	if(this == &other)
		return (*this);
	this->sign = other.getSign();
	return (*this);
}

Form::~Form()
{
}

std::string Form::getName() const
{
	return (this->name);
}

int	Form::getSignGrade() const
{
	return (this->sign_grade);
}

int Form::getExecuteGrade() const
{
	return (this->execute_grade);
}

bool Form::getSign() const
{
	return (this->sign);
}

void Form::beSign(const Bureaucrat& bure)
{
	if (bure.getGrade() < this->getSignGrade())
		this->sign = true;
	else if (bure.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooLowException::what(void) const throw()
{
	return "\033[31mException:\033[0m Grade Too Low ";
}

const char* Form::GradeTooHighException::what(void) const throw()
{
	return "\033[31mException:\033[0m Grade Too High ";
}

const char* Form::FormWithoutSignException::what(void) const throw()
{
	return "\033[31mException:\033[0m The form is not signed ";
}

std::ostream& operator<<(std::ostream& out, const Form& form)
{
	std::string sign;
	(form.getSign() == true) ? sign = "signed" : sign = "not signed";
	out << "Form <" << form.getName() << ">" << ", sign grade " << "<" << form.getSignGrade() << "> execute grade <" << form.getExecuteGrade() << ">, status <" << sign << ">." << std::endl;
	return out;
}