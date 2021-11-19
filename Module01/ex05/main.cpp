/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 01:10:54 by scass             #+#    #+#             */
/*   Updated: 2021/08/08 23:47:13 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
	Karen			karen;
	std::string 	level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	unsigned int	i;

	srand(time(0));
	i = rand() % 4;
	std::cout << level[i] << ": ";
	karen.complain(level[i]);
    return (0);
}