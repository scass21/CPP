/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 22:23:36 by scass             #+#    #+#             */
/*   Updated: 2021/08/25 18:42:28 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"


class AMateria
{
protected:
	std::string type;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria& copy);
	AMateria& operator=(const AMateria& materia);
	virtual ~AMateria();
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif