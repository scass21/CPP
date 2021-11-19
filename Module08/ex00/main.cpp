/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 22:51:51 by scass             #+#    #+#             */
/*   Updated: 2021/09/15 11:14:25 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> numbers;

	for (int i = 1; i <= 50; i++)
		numbers.push_back(i);
	try
	{
		easyFind(numbers, 9);
		easyFind(numbers, 26);
		easyFind(numbers, 35);
		easyFind(numbers, 0);
	}
	catch (std::exception) {}
	return 0;
}