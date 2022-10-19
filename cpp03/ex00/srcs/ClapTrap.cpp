/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:51:24 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/19 19:00:17 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :_name(name), _hp(10), _mana(10), _damage(0)
{
	std::cout << "String constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hp, int mana, int damage) :_name(name), _hp(hp), _mana(mana), _damage(damage)
{
	std::cout << "Full constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

int	ClapTrap::getHP(void)
{
	return (_hp);
}

int	ClapTrap::getMana(void)
{
	return (_mana);
}

int	ClapTrap::getDamage(void)
{
	return (_damage);
}

std::string ClapTrap::getName(void)
{
	return (_name);
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &egal)
{
	_name = egal.getName();

}

void	ClapTrap::attack(const std::string &target)
{
	if (_mana == 0 || _hp == 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << " but does not have enough energy to attack :(\n" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
	this->_mana--;
	std::cout << "ClapTrap " << _name << " lost 1 point of energy, still " << _mana << " energy point left\n" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp == 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead miskine ... he can't take anymore damage!" << std::endl;
		return ;
	}
	this->_hp -= amount;
	std::cout << "ClapTrap " << _name << " lost " << amount << " health point, " << _hp << " still left\n" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_mana == 0 || _hp == 0)
	{
		std::cout << "ClapTrap " << _name << " does not have enough energy to heal himself\n" << std::endl;
		return ;
	}
	this->_hp += amount;
	std::cout << "ClapTrap " << _name << " regained " << amount << " hp points, " << _hp << " still left" << std::endl;
	this->_mana--;
	std::cout << "ClapTrap " << _name << " lost 1 point of energy, still " << _mana << " energy point left\n" << std::endl;
}
