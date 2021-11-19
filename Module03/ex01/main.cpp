/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:34:05 by scass             #+#    #+#             */
/*   Updated: 2021/08/20 10:38:14 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	a;
	ScavTrap    b(a);
	ScavTrap	c("Karl");
	ScavTrap	d("Mary");

	std::cout << c;
	std::cout << d;

	d.attack(c.getName());
	c.takeDamage(5);
	c.attack(d.getName());
	d.takeDamage(30);
	c.beRepaired(20);
	d.guardGate();

	std::cout << c;
	std::cout << d;

	return (0);
}