/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:34:48 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/28 15:42:51 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
	public:
	Weapon();
	Weapon(std::string weapon);
	~Weapon();
	std::string	&getType();
	void	setType(std::string newType);
	
	private:
	std::string	_type;
};

#endif