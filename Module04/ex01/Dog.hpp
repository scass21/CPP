/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:08:03 by scass             #+#    #+#             */
/*   Updated: 2021/08/23 00:11:31 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain* brain;
public:
	Dog();
	Dog(const Dog& copy);
	Dog& operator=(const Dog& dog);
	~Dog();

	void makeSound() const;
	std::string getBrainIdea(int i) const;
};




#endif