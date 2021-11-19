/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:08:11 by scass             #+#    #+#             */
/*   Updated: 2021/08/25 20:31:29 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#define COLOR "\033[0m\033[35m"
#define RESET "\033[0m"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << COLOR << "Cat started" << RESET << std::endl;
}

Cat::Cat(const Cat& copy)
{
	*this = copy;
	std::cout << COLOR << "Cat copy start" << RESET << std::endl;
}

Cat& Cat::operator=(const Cat& cat)
{
	if(&cat == this)
		return (*this);
	this->type = cat.getType();
	std::cout << COLOR << "Cat Assignation started " << RESET << std::endl;
	return (*this);
}


void Cat::makeSound() const
{
	std::cout << COLOR << "Cat sound " << RESET << std::endl;
}

Cat::~Cat()
{
	std::cout << COLOR << "Cat finished " << RESET << std::endl;
}
