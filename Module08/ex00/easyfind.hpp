/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 22:52:12 by scass             #+#    #+#             */
/*   Updated: 2021/09/15 11:14:29 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void easyFind(T conteiner, int x)
{
	typename T::iterator i;
	i = std::find(conteiner.begin(), conteiner.end(), x);  
	if (i == conteiner.end())
	{
		std::cerr << "Can't find: " << x << std::endl; 
		throw std::exception();
	}
	else
		std::cout << "EasyFind: " << x << std::endl;     
}

#endif