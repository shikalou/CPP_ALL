/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:51:59 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/20 16:21:42 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
	public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(std::string name, int hp, int mana, int damage);
	ClapTrap(ClapTrap const &copy);
	~ClapTrap();
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	ClapTrap	&operator=(ClapTrap const &egal);

	private:
	std::string _name;
	unsigned int	_hp;
	unsigned int	_mana;
	unsigned int	_damage;
};

#endif
