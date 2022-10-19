/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:48:35 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/19 17:52:01 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap Perso1("riri");
	ScavTrap Perso2("loulou");

	Perso1.fullAttack(Perso2);
	Perso2.fullAttack(Perso1);
	Perso2.fullAttack(Perso1);
	Perso2.guardGate();
	Perso1.fullAttack(Perso2);

	FragTrap Perso3("fifi");

	Perso3.fullAttack(Perso2);
	Perso3.highFivesGuys();
	Perso2.fullAttack(Perso1);
	Perso2.beRepaired(10);
	Perso1.beRepaired(30);
	
	DiamondTrap Perso4("toto");

	Perso4.fullAttack(Perso3);
	Perso4.whoAmI();

	return (0);
}