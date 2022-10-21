/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:54:30 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/20 17:49:58 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	_hp = 100;
	_mana = 100;
	_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap string constructor called" << std::endl;
	_name = name;
	_hp = 100;
	_mana = 100;
	_damage = 30;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &egal)
{
	_name = egal._name;
	_hp = egal._hp;
	_damage = egal._damage;
	_mana = egal._mana;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " ask : Gimme five !!!!" << std::endl;
}