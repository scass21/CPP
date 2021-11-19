/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 16:50:14 by scass             #+#    #+#             */
/*   Updated: 2021/09/07 10:36:55 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <stdint.h>
#include <iostream>
#include <cstring>

#define BLUE "\033[36m"
#define YELL "\033[33m"
#define RESET "\033[0m"

struct Data
{
	int x;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
};

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
};


#endif