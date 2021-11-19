/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 17:49:17 by scass             #+#    #+#             */
/*   Updated: 2021/08/09 11:29:03 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) 
{
	this->type = type;
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string type) 
{
	this->type = type;
}

const std::string&  Weapon::getType()
{
    return (this->type);
}