/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:38:00 by scass             #+#    #+#             */
/*   Updated: 2021/08/09 16:10:39 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) 
{
}

Zombie::~Zombie()
{
	std::cout << "<" << name << "> " << "died" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" << name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}