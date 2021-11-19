/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:56:30 by scass             #+#    #+#             */
/*   Updated: 2021/08/26 14:03:50 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = 0;
	*this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& ms)
{
	if(&ms == this)
		return (*this);
	for(int i = 0; i < 4; i++)
	{
		if (this->materia[i])
			delete this->materia[i];
		this->materia[i] = ms.materia[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i])
			delete this->materia[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] == 0)
		{
			this->materia[i] = m;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if(type == "ice" || type == "cure")
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->materia[i] && !this->materia[i]->getType().compare(type))
				return this->materia[i]->clone();
		}
	}
	return (0);	
}