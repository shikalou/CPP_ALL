/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:21:54 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/27 20:58:19 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Creer une horde de N zombie tous appele name
Zombie* Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*ret = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		ret[i]._name = name;
		std::cout << "constructor for " << ret[i]._name << i << std::endl;
	}
	return (ret);
}