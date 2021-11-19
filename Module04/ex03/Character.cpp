/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 22:32:44 by scass             #+#    #+#             */
/*   Updated: 2021/08/23 22:33:13 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character()
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = 0;
}

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->materia[i] = 0;
}

Character::Character(const Character& copy)
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = 0;
	*this = copy;
}

Character& Character::operator=(const Character& ch)
{
	if(&ch == this)
		return (*this);
	this->name = ch.getName();
	for(int i = 0; i < 4; i++)
	{
		if (this->materia[i])
			delete this->materia[i];
		this->materia[i] = ch.materia[i]->clone();
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i])
			delete this->materia[i];
	}
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria *m)
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

void Character::unequip(int idx)
{
	if(idx >= 0 && idx < 4)
		this->materia[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if(idx >= 0 && idx < 4 && this->materia[idx])
		(this->materia[idx]->use(target));
	else
		(std::cout << "Change index " << std::endl);
	
}