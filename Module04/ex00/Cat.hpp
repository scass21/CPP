/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:08:00 by scass             #+#    #+#             */
/*   Updated: 2021/08/22 14:31:47 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
public:
	Cat();
	Cat(const Cat& copy);
	Cat& operator=(const Cat& cat);
	~Cat();

	void makeSound() const;
};




#endif