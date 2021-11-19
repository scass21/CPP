/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:08:11 by scass             #+#    #+#             */
/*   Updated: 2021/08/26 12:31:03 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

#define COLOR "\033[0m\033[35m"
#define RESET "\033[0m"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	for (int i = 0; i < 100; ++i)
		this->brain->setIdea(i, "Cat idea");
	std::cout << COLOR << "Cat started" << RESET << std::endl;
}

Cat::Cat(const Cat& copy)
{
	this->brain = 0;
	*this = copy;
	std::cout << COLOR << "Cat copy start" << RESET << std::endl;
}

Cat& Cat::operator=(const Cat& cat)
{
	if(&cat == this)
		return (*this);
	this->type = cat.getType();
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*cat.brain);
	std::cout << COLOR << "Cat Assignation started " << RESET << std::endl;
	return (*this);
}

Cat::~Cat()
{
	if (this->brain)
		delete this->brain;
	std::cout << COLOR << "Cat finished " << RESET << std::endl;
}

void Cat::makeSound()
{
	std::cout << COLOR << "Cat sound " << RESET << std::endl;
}

std::string Cat::getBrainIdea(int i) const
{
	if (i > 99)
		i = 99;
	return(this->brain->getIdea(i));
}


