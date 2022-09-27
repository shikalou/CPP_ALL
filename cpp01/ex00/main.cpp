/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:13:48 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/27 18:07:28 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	toto;
	Zombie	*tutu;

	Zombie zombie1("lulu");
	zombie1.announce();
	toto.randomChump("luna");
	tutu = toto.newZombie("lala");
	tutu->announce();
	delete tutu;
}
