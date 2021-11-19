/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 22:29:54 by scass             #+#    #+#             */
/*   Updated: 2021/09/02 22:03:29 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5)
{
	this->target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy):Form(copy)
{
	this->target = copy.getTarget();
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if(this == &other)
		return (*this);
	Form::operator=(other);
	this->target = other.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

void  PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if(this->getSign() == false)
		throw FormWithoutSignException();
	if(this->getExecuteGrade() < executor.getGrade())
	{
		std::cout << "<" << executor.getName() << ">" << " Cannot execute ";
		throw GradeTooLowException();
	}
	std::cout << "\033[34m" << "<" << this->target << "> has been pardoned by Zafod Beeblebrox" << "\033[0m" << std::endl;
}