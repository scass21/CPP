/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 22:54:39 by scass             #+#    #+#             */
/*   Updated: 2021/08/20 14:47:32 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string 	name;
	unsigned int	hitpoints;
	unsigned int	energy_point;
	unsigned int	attack_damage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& copy);
	ClapTrap& operator=(const ClapTrap& clap);
	~ClapTrap();
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName()const;
	unsigned int getHitpoint() const;
	unsigned int getEnergy() const;
	unsigned int getAtackdamage() const;
};

std::ostream& operator<<(std::ostream& out, const ClapTrap& clap);

#endif