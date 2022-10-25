/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:25:51 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/25 16:03:51 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* bou = new WrongAnimal();
	const WrongAnimal* fauxChat = new WrongCat();

	std::cout << fauxChat->getType() << std::endl;

	bou->makeSound();
	fauxChat->makeSound();

	delete meta;
	delete j;
	delete i;
	delete bou;
	delete fauxChat;
	return 0;
}