/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 22:33:26 by scass             #+#    #+#             */
/*   Updated: 2021/08/09 16:12:41 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::naming(std::string name) 
{
	this->name = name;
}

Zombie *zombieHorde(int N, std::string name) 
{
	int i = 0;

	Zombie *zombie_horde = new Zombie[N];
	while (i < N)
	{
		zombie_horde[i].naming(name);
		i++;
	}
	return zombie_horde;
}