/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:48:35 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/20 13:25:05 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	
	FragTrap Perso4(Perso3);

	return (0);
}