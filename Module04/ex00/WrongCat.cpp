/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:11:58 by scass             #+#    #+#             */
/*   Updated: 2021/08/20 21:12:00 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

#define COLOR "\033[0m\033[31m"
#define RESET "\033[0m"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << COLOR << "WrongCat started" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	this->type = copy.getType();
	std::cout << COLOR << "WrongCat copy start" << RESET << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& WC)
{
	if(&WC == this)
		return (*this);
	this->type = WC.getType();
	std::cout << COLOR << "WrongCat Assignation started " << RESET << std::endl;
	return (*this);
}


void WrongCat::makeSound() const
{
	std::cout << COLOR << "WrongCat sound " << RESET << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << COLOR << "WrongCat finished " << RESET << std::endl;
}
