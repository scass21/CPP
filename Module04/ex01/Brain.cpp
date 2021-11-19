/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 20:45:32 by scass             #+#    #+#             */
/*   Updated: 2021/08/26 12:22:41 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; ++i)
		ideas[i] = "Brain Idea";	
	std::cout << "Brain activated " << std::endl;
}

Brain::Brain(const Brain& copy)
{
	*this = copy;
	std::cout << "Brain copy " << std::endl;
}

Brain& Brain::operator=(const Brain& brain)
{
	if (this == &brain)
		return (*this);
	for (int i = 0; i < 100; ++i)
			this->ideas[i] = brain.ideas[i];
	std::cout << "Brain assignation " << std::endl;
	return *this;
}

std::string Brain::getIdea(int index) const
{
	return (this->ideas[index]);
}

void Brain::setIdea(int index, std::string idea)
{
	this->ideas[index] = idea;
}

Brain::~Brain()
{
	std::cout << "Brain destructor " << std::endl;
}

