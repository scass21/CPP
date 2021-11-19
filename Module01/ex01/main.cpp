/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:47:36 by scass             #+#    #+#             */
/*   Updated: 2021/08/09 16:16:16 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
# include <cstdlib>

int main(int argc, char **argv)
{
	std::string name;
	int			i = 0;
	int			N;
	
	if (argc == 3)
	{
		if ((N = atoi(argv[1])) <= 0)
			N = 1;
		name = argv[2];
	}
	else
	{
		N = 10;
		name = "someone";
	}	
	Zombie *zombie_horde = zombieHorde(N, name);
	while (i < N)
	{
		zombie_horde[i].announce();
		i++;
	}
	delete[] zombie_horde;
	return (0);
}