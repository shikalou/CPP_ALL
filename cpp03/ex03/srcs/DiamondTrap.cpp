/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:29:25 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/20 13:12:03 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// https://loic-joly.developpez.com/articles/heritage-multiple/#L4-B

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + ("_clap_name"))
{
	std::cout << "DiamondTrap string constructor called" << std::endl;
	_name = name;
	_hp = 100;
	_mana = 50;
	_damage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &egal)
{
	_name = egal._name;
	_hp = egal._hp;
	_damage = egal._damage;
	_mana = egal._mana;
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap's name = " << _name << std::endl;
	std::cout << "DiamondTrap's ClapTrap name = " << ClapTrap::_name << std::endl;
}

