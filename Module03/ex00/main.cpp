/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:34:05 by scass             #+#    #+#             */
/*   Updated: 2021/08/18 18:19:57 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	a;
	ClapTrap    b(a);
	ClapTrap	c("Karl");
	ClapTrap	d("Mary");

	d.attack("Karl");
	c.takeDamage(5);
	c.attack("Mary");
	d.takeDamage(11);
	c.beRepaired(2);

	return (0);
}