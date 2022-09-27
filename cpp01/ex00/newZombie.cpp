/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:15:06 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/27 18:15:54 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Crée un zombie, lui donne un nom et le retourne.
Zombie* Zombie::newZombie(std::string name)
{
	Zombie	*ret = new Zombie(name);
	return (ret);
}