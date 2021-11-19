/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:49:15 by scass             #+#    #+#             */
/*   Updated: 2021/08/20 15:16:04 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


#define COLOR "\033[0m\033[32m"
#define RESET "\033[0m"

DiamondTrap::DiamondTrap()
{
	this->hitpoints = FragTrap::hitpoints;
	this->energy_point = ScavTrap::energy_point;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << COLOR << "Start Diamond Trap" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->hitpoints = FragTrap::hitpoints;
	this->energy_point = ScavTrap::energy_point;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << COLOR << "Diamond " << name << " started " << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << COLOR << "Diamond Trap Goodbye!" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	*this = copy;
	std::cout << COLOR << "Diamond " << "Copy " << this->name << " started " << RESET << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& Diamond)
{
	if (&Diamond == this)
		return (*this);
	this->hitpoints = Diamond.hitpoints;
	this->energy_point = Diamond.energy_point;
	this->attack_damage = Diamond.attack_damage;
	std::cout << COLOR << "Diamond " << "Assignation " << this->name << " started " << RESET << std::endl;
	return (*this);
}

void DiamondTrap::attack(std::string const & target)
{
	std::cout << COLOR << "Attack from DiamondTrap " << RESET << std::endl;
	this->ScavTrap::attack(target); 
	
}

void DiamondTrap::whoAmI()
{
	std::cout << COLOR << "My name is " << this->name << " My ClapTrap name is " << ClapTrap::name << RESET << std::endl;
}
