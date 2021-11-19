/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:08:00 by scass             #+#    #+#             */
/*   Updated: 2021/08/26 12:30:12 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain* brain;
public:
	Cat();
	Cat(const Cat& copy);
	Cat& operator=(const Cat& cat);
	~Cat();

	void makeSound();
	std::string getBrainIdea(int i) const;
};




#endif