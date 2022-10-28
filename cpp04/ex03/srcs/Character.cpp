/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:26:26 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/27 18:12:08 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() :_name("default")
{
	std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		inv[i] = NULL;
	}
}

Character::Character(std::string name)
{
	std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		inv[i] = NULL;
	}
	this->_name = name;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (inv[i] != NULL)
			delete inv[i];
	}
}

Character::Character(Character const &copy)
{
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		inv[i] = NULL;
	}
	*this = copy;
}

Character &Character::operator=(Character const &egal)
{
	this->_name = egal._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->inv[i] != NULL)
			delete this->inv[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (egal.inv[i] != NULL)
			this->inv[i] = egal.inv[i]->clone();
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inv[i] == NULL)
		{
			inv[i] = m;
			break ;
		}
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if ((idx < 4 && idx >= 0)  && inv[idx] != NULL)
	{
		inv[idx]->use(target);
	}
}

void	Character::unequip(int idx)
{
	if ((idx < 4 && idx >= 0)  && inv[idx] != NULL)
	{
		inv[idx] = NULL;
	}
}
