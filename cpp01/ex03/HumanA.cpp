/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:32:08 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/29 15:22:01 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &_weapon) :_name(name), _weaponA(_weapon)
{
	std::cout << "HumanA constructor w/ args" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA destructor" << std::endl;
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weaponA.getType() << std::endl;
}

