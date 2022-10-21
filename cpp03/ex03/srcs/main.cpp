/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:48:35 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/21 16:07:58 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap Perso1("toto");
	DiamondTrap Perso2("titi");

	Perso1.fullAttack(Perso2);
	Perso2.whoAmI();
	Perso1.highFivesGuys();
	Perso2.fullAttack(Perso2);
	Perso2.guardGate();

	DiamondTrap Perso3(Perso1);
	Perso3.fullAttack(Perso1);
	Perso3.beRepaired(5);
	return (0);
}