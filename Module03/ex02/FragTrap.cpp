/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:31:30 by scass             #+#    #+#             */
/*   Updated: 2021/08/19 12:17:22 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

#define COLOR "\033[0m\033[35m"
#define RESET "\033[0m"

FragTrap::FragTrap()
{
	this->hitpoints = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
	std::cout << COLOR << "Start Frag Trap" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hitpoints = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
	std::cout << COLOR << "Frag " << name << " started " << RESET << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << COLOR << "Frag Trap Goodbye!" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy)
{
	*this = copy;
	std::cout << COLOR << "Frag " << "Copy " << this->name << " started " << RESET << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& Frag)
{
	if (&Frag == this)
		return (*this);
	this->hitpoints = Frag.hitpoints;
	this->energy_point = Frag.energy_point;
	this->attack_damage = Frag.attack_damage;
	std::cout << COLOR << "Frag " << "Assignation " << this->name << " started " << RESET << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << COLOR << "Frag " << this->name << " High Fives! " << RESET << std::endl;
	this->energy_point--;
}
