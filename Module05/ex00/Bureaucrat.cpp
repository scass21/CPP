/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 12:41:34 by scass             #+#    #+#             */
/*   Updated: 2021/09/02 22:30:26 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default"), grade(1)
{
}

Bureaucrat::Bureaucrat(int grade, std::string name): name(name), grade(grade)
{
	if (this->grade < 1)
		throw GradeTooHighException();
	if (this->grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name)
{
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if(&other == this)
		return(*this);
	this->grade = other.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::incrementGrade()
{
	this->grade--;
	if (this->grade < 1)
	{
		this->grade = 1;
		throw GradeTooHighException();
	}
}

void Bureaucrat::decrementGrade()
{
	this->grade++;
	if (this->grade > 150)
	{
		this->grade = 150;
		throw GradeTooLowException();
	}
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "\033[31mException:\033[0m Grade Too Low ";
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "\033[31mException:\033[0m Grade Too High ";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << "<" << bureaucrat.getName() << ">" << ", bureaucrat grade " << "<" << bureaucrat.getGrade() << ">." << std::endl;
	return out;
}