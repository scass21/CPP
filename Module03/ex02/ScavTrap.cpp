/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:54:04 by scass             #+#    #+#             */
/*   Updated: 2021/08/20 10:37:26 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#define COLOR "\033[0m\033[36m"
#define RESET "\033[0m"

ScavTrap::ScavTrap()
{
	this->hitpoints = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
	std::cout << COLOR << "Start Scav Trap" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hitpoints = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
	std::cout << COLOR << "Scav " << name << " started " << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << COLOR << "Scav Trap Goodbye!" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	*this = copy;
	std::cout << COLOR << "Scav " << "Copy " << this->name << " started " << RESET << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scav)
{
	if (&scav == this)
		return (*this);
	this->hitpoints = scav.hitpoints;
	this->energy_point = scav.energy_point;
	this->attack_damage = scav.attack_damage;
	std::cout << COLOR << "Scav " << "Assignation " << this->name << " started " << RESET << std::endl;
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << COLOR << "Scav " << this->name << " have enterred in Gate keeper mode! " << RESET << std::endl;
	this->energy_point--;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << COLOR << "Attack from Scav " << RESET;
	std::cout << COLOR << this->name << " attack " << target << RESET << std::endl;
	this->hitpoints--;
}
