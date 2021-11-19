/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 22:23:20 by scass             #+#    #+#             */
/*   Updated: 2021/08/25 18:42:33 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria& copy)
{
	*this = copy;
}

AMateria& AMateria::operator=(const AMateria& materia)
{
	if(&materia == this)
		return (*this);
	this->type = materia.getType();
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << target.getName() << " use Materia" << std::endl;
}
