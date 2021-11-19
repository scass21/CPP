/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:07:54 by scass             #+#    #+#             */
/*   Updated: 2021/08/22 20:42:57 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal(const Animal& copy);
	Animal& operator=(const Animal& animal);
	virtual ~Animal();
	std::string getType() const;
	virtual void makeSound() const;
};



#endif