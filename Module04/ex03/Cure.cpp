/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 22:42:26 by scass             #+#    #+#             */
/*   Updated: 2021/08/26 14:11:02 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
}

Cure::Cure(const Cure& copy)
{
	*this = copy;
}

Cure& Cure::operator=(const Cure& cure)
{
	if (&cure == this)
		return (*this);
	this->type = cure.getType();
	return (*this);
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}