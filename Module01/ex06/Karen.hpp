/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 01:11:00 by scass             #+#    #+#             */
/*   Updated: 2021/08/09 22:10:40 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class Karen
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	Karen();
	~Karen();
	void complain(std::string level);
};

#endif