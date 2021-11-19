/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:08:08 by scass             #+#    #+#             */
/*   Updated: 2021/08/22 14:33:00 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#define COLOR "\033[0m\033[33m"
#define RESET "\033[0m"

Animal::Animal()
{
	type = "Animal";
	std::cout << COLOR << "Default Animal start " << RESET << std::endl;
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
	std::cout << COLOR << "Animal copy start" << RESET << std::endl;
}

Animal& Animal::operator=(const Animal& animal)
{
	if (&animal == this)
		return (*this);
	this->type = animal.getType();
	std::cout << COLOR << "Animal Assignation started " << RESET << std::endl;
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << COLOR << "Animal sound " << RESET << std::endl;
}

Animal::~Animal()
{
	std::cout << COLOR << "Animal finished " << RESET << std::endl;
}
