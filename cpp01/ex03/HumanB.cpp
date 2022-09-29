/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:51:12 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/29 14:18:35 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :_name(name), _weaponB(NULL)
{
	std::cout << "HumanB constructor w/ args" << std::endl;
}

HumanB::HumanB(std::string name, Weapon *_weapon) :_name(name), _weaponB(_weapon)
{
	std::cout << "HumanB constructor w/ args2" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB destructor" << std::endl;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with their " << _weaponB->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &_weapon)
{
	_weaponB = &_weapon;
}