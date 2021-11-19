/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:40:17 by scass             #+#    #+#             */
/*   Updated: 2021/09/02 22:10:22 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137)
{
	this->target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy):Form(copy)
{
	this->target = copy.getTarget();
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if(this == &other)
		return (*this);
	Form::operator=(other);
	this->target = other.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

void  ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if(this->getSign() == false)
		throw FormWithoutSignException();
	if(this->getExecuteGrade() < executor.getGrade())
	{
		std::cout << "<" << executor.getName() << ">" << " Cannot execute ";
		throw GradeTooLowException();
	}
	std::string filename = this->target + "_shrubbery";
	std::ofstream file(filename.c_str());
	file << "	                  /     /  /    /    / / / " << "\n";
	file << "                   /        /  /     //    / " << "\n";
	file << "                /                 /         /  / " << "\n";
	file << "                                / " << "\n";
	file << "                               /                // " << "\n";
	file << "               /          /            /              / " << "\n";
	file << "               /            '/,        /               / " << "\n";
	file << "               /              'b      * " << "\n";
	file << "                /              '$    //                // " << "\n";
	file << "               /    /           $:   /:               / " << "\n";
	file << "             //      /  //      */  @):        /   / / " << "\n";
	file << "                          /     :@,@):   ,/**:'   / " << "\n";
	file << "              /      /,         :@@*: //**'      /   / " << "\n";
	file << "                       '/o/    /:(@'/@*'  / " << "\n";
	file << "               /  /       'bq,/ :,@@*'   ,*      /  / " << "\n";
	file << "                          ,p$q8,:@)'  /p*'      / " << "\n";
	file << "                   /     '  / '@@Pp@@*'    /  / " << "\n";
	file << "                    /  / //    Y7'.'     /  / " << "\n";
	file << "                              :@):. " << "\n";
	file << "                             .:@:'. " << "\n";
	file << "                           .::(@:.  " << std::endl;
	std::cout << "\033[34m" << filename << " is ready" << "\033[0m" << std::endl;
}