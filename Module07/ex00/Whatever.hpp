/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 23:36:19 by scass             #+#    #+#             */
/*   Updated: 2021/09/07 22:06:17 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T& x, T& y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
const T& min(const T& x, const T& y)
{
	return ((x < y) ? x : y);
}

template <typename T>
const T& max(const T& x, const T& y)
{
	return ((x > y) ? x : y);
}

#endif