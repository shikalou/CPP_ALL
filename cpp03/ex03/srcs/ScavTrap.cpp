/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:34:59 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/20 17:28:50 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_hp = 100;
	_mana = 50;
	_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap string constructor called" << std::endl;
	_name = name;
	_hp = 100;
	_mana = 50;
	_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &egal)
{
	_name = egal._name;
	_hp = egal._hp;
	_damage = egal._damage;
	_mana = egal._mana;
	return (*this);
}

void	ScavTrap::fullAttack(ClapTrap &target)
{
	this->attack(target.getName());
	target.takeDamage(this->_damage);
}

void	ScavTrap::attack(const std::string &target)
{
	if (_mana <= 0 || _hp <= 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << " but does not have enough energy to attack :(\n" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
	this->_mana--;
	std::cout << "ScavTrap " << _name << " lost 1 point of energy, still " << _mana << " energy point left\n" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (_hp <= 0)
	{
		std::cout << "ScavTrap " << _name << " is already dead miskine ... he can't take anymore damage!" << std::endl;
		return ;
	}
	if (_hp <= amount)
		this->_hp = 0;
	else
		this->_hp -= amount;
	std::cout << "ScavTrap " << _name << " lost " << amount << " health point, " << _hp << " still left\n" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (_mana <= 0 || _hp <= 0)
	{
		std::cout << "ScavTrap " << _name << " does not have enough energy to heal himself\n" << std::endl;
		return ;
	}
	this->_hp += amount;
	std::cout << "ScavTrap " << _name << " regained " << amount << " hp points, " << _hp << " still left" << std::endl;
	this->_mana--;
	std::cout << "ScavTrap " << _name << " lost 1 point of energy, still " << _mana << " energy point left\n" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}