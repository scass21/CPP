/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:28:43 by scass             #+#    #+#             */
/*   Updated: 2021/08/09 17:28:14 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie(std::string name);
	~Zombie();
	void	announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif