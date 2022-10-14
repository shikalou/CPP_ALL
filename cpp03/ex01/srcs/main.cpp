/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:48:35 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/14 18:20:02 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Perso1("un");
	ClapTrap Perso2("deux", 10, 10, 5);

	Perso1.attack("deux");
	Perso2.takeDamage(0);
	Perso2.attack("un");
	Perso1.takeDamage(5);
	Perso2.attack("un");
	Perso1.takeDamage(5);
	Perso1.attack("deux");
	Perso2.beRepaired(5);
	Perso2.attack("un");
	Perso1.takeDamage(5);
	return (0);
}