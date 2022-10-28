/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:55:03 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/27 17:13:21 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria constructor called" << std::endl;
	this->type = type;
}

AMateria::AMateria(AMateria const &copy)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = copy;
}

AMateria &AMateria::operator=(AMateria const &egal)
{
	(void)egal;
	return (*this);
}

std::string const &AMateria::getType(void) const
{
	return (type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}
