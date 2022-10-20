/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:48:35 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/20 13:15:57 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap Perso1("riri");
	ScavTrap Perso2("loulou");
	ScavTrap Perso3(Perso2);

	Perso1.fullAttack(Perso2);
	Perso2.fullAttack(Perso1);
	Perso2.fullAttack(Perso1);
	Perso1.fullAttack(Perso2);
	Perso3.fullAttack(Perso1);
	return (0);
}