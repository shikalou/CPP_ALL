/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:04:20 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/25 11:30:11 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
	Dog();
	Dog(std::string name);
	~Dog();
	Dog(Dog const &copy);
	Dog	&operator=(Dog const &egal);
	std::string	getType(void) const;
	void	makeSound() const;

	private:
};

#endif
