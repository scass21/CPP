/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:51:14 by scass             #+#    #+#             */
/*   Updated: 2021/08/09 11:28:34 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string		type;
public:
	Weapon(std::string  type);
	~Weapon();
	void				setType(std::string type);
	const std::string&	getType(void);
};

#endif