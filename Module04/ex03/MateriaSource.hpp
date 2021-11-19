/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:55:14 by scass             #+#    #+#             */
/*   Updated: 2021/08/25 12:18:48 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* materia[4];
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource& copy);
	MateriaSource& operator=(const MateriaSource& ms);
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif