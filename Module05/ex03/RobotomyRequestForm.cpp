/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 14:47:49 by scass             #+#    #+#             */
/*   Updated: 2021/09/02 22:04:28 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45)
{
	this->target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy):Form(copy)
{
	this->target = copy.getTarget();
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if(this == &other)
		return (*this);
	Form::operator=(other);
	this->target = other.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

void  RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if(this->getSign() == false)
		throw FormWithoutSignException();
	if(this->getExecuteGrade() < executor.getGrade())
	{
		std::cout << "<" << executor.getName() << ">" << " Cannot execute ";
		throw GradeTooLowException();
	}
	std::cout << "\033[34m" << "Some Drilling Noises" << std::endl;
	std::cout << "<" << this->getTarget() << ">";
	srand(time(0));
	(rand() % 2) ? (std::cout << " has been robotomized successfully") : (std::cout << " failure");
	std::cout << "\033[0m" << std::endl;
}