/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:29:25 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/21 16:04:08 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// https://loic-joly.developpez.com/articles/heritage-multiple/#L4-B

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	_hp = 100;
	_mana = 50;
	_damage = 30;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + ("_clap_name")), FragTrap(name + ("_clap_name")), ScavTrap(name + ("_clap_name"))
{
	std::cout << "DiamondTrap string constructor called" << std::endl;
	_name = name;
	_hp = 100;
	_mana = 50;
	_damage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy), _name(copy._name)
{
	std::cout << "Copy constructor called" << std::endl;
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
	ClapTrap::_name = egal.ClapTrap::_name;
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap's name = " << _name << std::endl;
	std::cout << "DiamondTrap's ClapTrap name = " << ClapTrap::_name << std::endl;
}

