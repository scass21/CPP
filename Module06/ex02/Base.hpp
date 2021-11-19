/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 16:50:14 by scass             #+#    #+#             */
/*   Updated: 2021/09/07 10:42:31 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>

#define RED "\033[31m"
#define YELL "\033[33m"
#define RESET "\033[0m"

class Base
{
public:
	virtual ~Base(){};
};

#endif