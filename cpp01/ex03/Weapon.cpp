/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:45:06 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/28 18:51:39 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Weapon constructor" << std::endl;
}

Weapon::Weapon(std::string weapon) :_type(weapon)
{
	std::cout << "Weapon constructor w/ args" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destructor" << std::endl;
}

std::string	&Weapon::getType()
{
	return(_type);
}

void	Weapon::setType(std::string newType)
{
	_type = newType;
}
