/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:50:39 by scass             #+#    #+#             */
/*   Updated: 2021/09/05 22:11:07 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon*		weapon;
public:
	HumanB(std::string name);
	~HumanB();
	void	attack(void);
	void	setWeapon(Weapon& Weapon);
};

#endif