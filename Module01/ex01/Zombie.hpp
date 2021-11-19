/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:28:43 by scass             #+#    #+#             */
/*   Updated: 2021/08/05 00:04:42 by scass            ###   ########.fr       */
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
	Zombie(void);
	~Zombie();
	void	announce(void);
	void 	naming(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif