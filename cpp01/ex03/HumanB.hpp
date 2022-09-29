/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:21:14 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/29 15:55:58 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public :
	HumanB(std::string name);
	HumanB(std::string name, Weapon *_weapon);
	~HumanB();
	void	setWeapon(Weapon &_weapon);
	void	attack();

	private :
	std::string	_name;
	Weapon *_weaponB;

};

#endif