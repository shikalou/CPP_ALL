/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:19:42 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/27 20:45:59 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	pipex;
	Zombie	zombie1("minishell");
	Zombie	*zombie2;
	Zombie	zombie3;

	pipex.randomChump("pipex");
	zombie1.announce();
	zombie2 = zombie1.newZombie("getNextLine");
	zombie2->announce();
	delete zombie2;
	zombie2 = zombie3.zombieHorde(3, "SoLong");
	for (int i = 0; i < 3; i++)
	{
		zombie2[i].announce();
	}
	delete [] zombie2;
}