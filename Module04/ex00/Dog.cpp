/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:09:09 by scass             #+#    #+#             */
/*   Updated: 2021/08/25 20:31:36 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

#define COLOR "\033[0m\033[36m"
#define RESET "\033[0m"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << COLOR << "Dog started" << RESET << std::endl;
}

Dog::Dog(const Dog& copy)
{
	*this = copy;
	std::cout << COLOR << "Dog copy start" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
	if(&dog == this)
		return (*this);
	this->type = dog.getType();
	std::cout << COLOR << "Dog Assignation started " << RESET << std::endl;
	return (*this);
}


void Dog::makeSound() const
{
	std::cout << COLOR << "Dog sound " << RESET << std::endl;
}

Dog::~Dog()
{
	std::cout << COLOR << "Dog finished " << RESET << std::endl;
}
