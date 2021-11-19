/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:11:43 by scass             #+#    #+#             */
/*   Updated: 2021/08/20 21:11:44 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

#define COLOR "\033[0m\033[31m"
#define RESET "\033[0m"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::cout << COLOR << "Default WrongAnimal start " << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	*this = copy;
	std::cout << COLOR << "WrongAnimal copy start" << RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& WA)
{
	if (&WA == this)
		return (*this);
	this->type = WA.getType();
	std::cout << COLOR << "WrongAnimal Assignation started " << RESET << std::endl;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << COLOR << "WrongAnimal sound " << RESET << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << COLOR << "WrongAnimal finished " << RESET << std::endl;
}
