/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:48:25 by scass             #+#    #+#             */
/*   Updated: 2021/09/13 00:34:08 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
# include <cmath>

class Span
{
private:
	unsigned int N;
	std::vector<int>  number;
public:
	Span();
	Span(unsigned int N);
	Span(const Span& copy);
	Span& operator=(const Span& other);
	~Span();

	void addNumber(int n);
	void addNumber(int n, unsigned int count);
	int shortestSpan();
	int longestSpan();
};

#endif