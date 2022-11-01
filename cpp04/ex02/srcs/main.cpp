/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:25:51 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/28 12:25:03 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	Animal *tab[10];

	for(int i = 0; i < 10; i++)
	{
		if (i < 5)
			tab[i] = new Cat();
		else
			tab[i] = new Dog();
	}

	for (int i = 0; i < 10; i++)
	{
		tab[i]->makeSound();
		delete tab[i];
	}

	Dog *i = new Dog();
	Dog toto(*i);

	toto = *i;
	delete i;

	return (0);
}