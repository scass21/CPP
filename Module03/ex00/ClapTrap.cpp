/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:05:11 by scass             #+#    #+#             */
/*   Updated: 2021/08/20 15:23:38 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
	this->hitpoints = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
	std::cout << "Start Clap Trap" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitpoints = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
	std::cout << name << " started " << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Clap Trap Goodbye!" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
	std::cout << "Copy " << this->name << " started " << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clap)
{
	if (&clap == this)
		return (*this);
	this->hitpoints = clap.hitpoints;
	this->energy_point = clap.energy_point;
	this->attack_damage = clap.attack_damage;
	std::cout << "Assignation " << this->name << " started " << std::endl;
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << this->name << " attack " << target << std::endl;
	this->hitpoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " take damage " << amount << std::endl;
	if (energy_point >= amount)
		this->attack_damage -= amount;
	else
		std::cout << "received damage incompatible with life" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->name << " repaired " << amount << std::endl;
	this->attack_damage += amount;
}