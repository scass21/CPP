/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:34:05 by scass             #+#    #+#             */
/*   Updated: 2021/08/20 14:53:27 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	a;
	DiamondTrap b(a);
	DiamondTrap d("Din");
	DiamondTrap c("Ben");
		
	std::cout << c;
	std::cout << d;

	c.whoAmI();
	d.whoAmI();
	d.attack(c.getName());
	c.takeDamage(5);
	c.attack(d.getName());
	d.takeDamage(30);
	c.beRepaired(20);
	d.highFivesGuys();

	std::cout << c;
	std::cout << d;

	return (0);
}