/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:51:59 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/20 12:28:29 by ldinaut          ###   ########.fr       */
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
	int	_hp;
	int	_mana;
	int	_damage;
};

#endif
