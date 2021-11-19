/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:50:43 by scass             #+#    #+#             */
/*   Updated: 2021/08/09 18:34:46 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon&		weapon;
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void	attack(void);
};

#endif