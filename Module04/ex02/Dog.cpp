/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:09:09 by scass             #+#    #+#             */
/*   Updated: 2021/08/26 12:31:15 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Brain.hpp"

#define COLOR "\033[0m\033[36m"
#define RESET "\033[0m"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	for (int i = 0; i < 100; ++i)
		this->brain->setIdea(i, "Dog idea");	
	std::cout << COLOR << "Dog started" << RESET << std::endl;
}

Dog::Dog(const Dog& copy)
{
	this->brain = 0;
	*this = copy;
	std::cout << COLOR << "Dog copy start" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
	if(&dog == this)
		return (*this);
	this->type = dog.getType();
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*dog.brain);
	std::cout << COLOR << "Dog Assignation started " << RESET << std::endl;
	return (*this);
}

Dog::~Dog()
{
	if (this->brain)
		delete this->brain;
	std::cout << COLOR << "Dog finished " << RESET << std::endl;
}

void Dog::makeSound()
{
	std::cout << COLOR << "Dog sound " << RESET << std::endl;
}

std::string Dog::getBrainIdea(int i) const
{
	if (i > 99)
		i = 99;
	return(this->brain->getIdea(i));
}
