/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 16:49:00 by scass             #+#    #+#             */
/*   Updated: 2021/09/07 10:37:01 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
	Data* value = new Data();
	value->x = 555;
	std::cout << YELL << "Data: " << RESET << value << std::endl;
	std::cout << BLUE << "Value: " << RESET << value->x << std::endl;
	uintptr_t raw = serialize(value);
	std::cout << YELL << "Data after serialize - Raw: " << RESET << raw << std::endl;
	std::cout << BLUE << "Value: " << RESET << value->x << std::endl;
	std::cout << YELL << "Deserialize Raw: " << RESET << deserialize(raw) << std::endl;
	std::cout << BLUE << "Value: " << RESET << deserialize(raw)->x << std::endl;
	delete value;
	return 0;
}