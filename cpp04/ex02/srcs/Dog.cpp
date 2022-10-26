/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:50:46 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/25 18:55:17 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog name constructor called" << std::endl;
	_type = "dog";
	_brain = new Brain();
}

Dog::Dog(std::string name = "Dog"): Animal(name)
{
	std::cout << "Dog name constructor called" << std::endl;
}

Dog::Dog(Dog const &copy): Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog	&Dog::operator=(Dog const &egal)
{
	_type = egal._type;
	if (_brain)
		delete _brain;
	_brain = new Brain(*egal._brain);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	if (_brain)
		delete _brain;
}

std::string Dog::getType() const
{
	return (this->_type);
}

void	Dog::makeSound() const
{
	std::cout << "ouaf ouaf" << std::endl;
}
