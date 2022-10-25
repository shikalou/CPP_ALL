/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:28:38 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/25 16:05:11 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
	Animal();
	Animal(std::string name);
	virtual ~Animal();
	Animal(Animal const &copy);
	Animal	&operator=(Animal const &egal);
	virtual void	makeSound(void) const;
	std::string	getType(void) const;

	protected:
	std::string _type;

	private:
};

#endif
