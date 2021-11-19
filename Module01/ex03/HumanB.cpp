/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:57:13 by scass             #+#    #+#             */
/*   Updated: 2021/09/05 22:13:59 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon& weapon) 
{
	this->weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (this->weapon != NULL)
		std::cout << this->name << " attacks with his " << weapon->getType() << std::endl;
	else
		std::cout << this->name << " doesn't have a weapon " << std::endl;
}
