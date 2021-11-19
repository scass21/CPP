/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:05:11 by scass             #+#    #+#             */
/*   Updated: 2021/08/20 15:04:28 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#define COLOR "\033[0m\033[33m"
#define RESET "\033[0m"

ClapTrap::ClapTrap(): hitpoints(10), energy_point(10), attack_damage(0)
{
	std::cout << COLOR << "Start Clap Trap" << std::endl;
}

ClapTrap::ClapTrap(std::string name): hitpoints(10), energy_point(10), attack_damage(0)
{
	this->name = name;
	std::cout << COLOR << "Clap " << name << " started " << RESET << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << COLOR << "Clap Trap Goodbye!" << RESET << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
	std::cout << COLOR << "Clap" << "Copy " << this->name << " started " << RESET << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clap)
{
	if (&clap == this)
		return (*this);
	this->hitpoints = clap.hitpoints;
	this->energy_point = clap.energy_point;
	this->attack_damage = clap.attack_damage;
	std::cout << COLOR << "Clap" << "Assignation " << this->name << " started " << RESET << std::endl;
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << COLOR << this->name << " attack " << target << RESET << std::endl;
	this->hitpoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << COLOR << this->name << " take damage " << amount << RESET << std::endl;
	if (attack_damage >= amount)
		this->attack_damage -= amount;
	else
	{
		this->attack_damage = 0;
		std::cout << COLOR << "received damage incompatible with life" << RESET << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << COLOR << this->name << " repaired " << amount << RESET << std::endl;
	this->attack_damage +=  amount;
}

std::string ClapTrap::getName() const
{
	return (this->name);
}
	
unsigned int ClapTrap::getHitpoint() const
{
	return (this->hitpoints);
}

unsigned int ClapTrap::getEnergy() const
{
	return (this->energy_point);
}
	
unsigned int ClapTrap::getAtackdamage() const
{
	return (this->attack_damage);
}

std::ostream& operator<<(std::ostream& out, const ClapTrap& Clap)
{
	out << Clap.getName() << " Hitpoints: " << Clap.getHitpoint() << " Energy_point: " 
	<< Clap.getEnergy() << " Attack_damage: " << Clap.getAtackdamage() << std::endl;
	return (out);
}