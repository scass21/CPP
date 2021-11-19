/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:31:16 by scass             #+#    #+#             */
/*   Updated: 2021/08/19 12:17:30 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FragTRAP_HPP
# define FragTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& copy);
	FragTrap& operator=(const FragTrap& Frag);
	~FragTrap();
	void highFivesGuys();
};

#endif