/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 00:09:03 by scass             #+#    #+#             */
/*   Updated: 2021/09/08 12:28:32 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, int len, void (*function)(const T&))
{
	if (!array || !len)
		return;
	for(int i = 0; i < len; i++)
	{
		function(array[i]);
	}
	return;
}

template <typename T>
void print_array(T& x)
{
	std::cout << x << " ";
}

template <typename T>
void print(T const & x)
{
	std::cout << x << std::endl;
	return;
}
#endif