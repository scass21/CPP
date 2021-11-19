/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:34:05 by scass             #+#    #+#             */
/*   Updated: 2021/08/20 15:02:59 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap	clap;
	FragTrap	a;
	FragTrap    b(a);
	FragTrap	d("Karl");
	ScavTrap	c("Mary");

	std::cout << "\033[32mClap \033[0m" << clap;
	std::cout << "\033[32mScav \033[0m" << c;
	std::cout << "\033[32mFrag \033[0m" << d;

	d.attack(c.getName());
	c.takeDamage(5);
	c.attack(d.getName());
	d.takeDamage(30);
	c.beRepaired(20);
	d.highFivesGuys();

	std::cout << "\033[32mClap \033[0m" << clap;
	std::cout << "\033[32mScav \033[0m" << c;
	std::cout << "\033[32mFrag \033[0m" << d;

	return (0);
}