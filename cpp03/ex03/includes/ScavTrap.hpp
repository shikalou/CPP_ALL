/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:33:39 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/20 13:11:16 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(std::string name, int hp, int mana, int damage);
	ScavTrap(ScavTrap const &copy);
	~ScavTrap();
	ScavTrap	&operator=(ScavTrap const &egal);
	void	fullAttack(ClapTrap &target);
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	guardGate();

	private:
};

#endif