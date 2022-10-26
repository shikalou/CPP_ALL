/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:09:10 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/25 18:18:12 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	std::cout << "Brain copy construtor called" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(Brain const &egal)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = egal.ideas[i];
	}
	return (*this);
}
