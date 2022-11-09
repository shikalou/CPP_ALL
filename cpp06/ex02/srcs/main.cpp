/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:31:18 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/09 18:45:04 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int i = (rand() % 3 + 1);
	
	switch (i)
	{
		case 3:
			return (new A());
		case 1:
			return (new B());
		case 2 :
			return (new C());
	}
	return (NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "it's A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "it's B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "it's C" << std::endl;
	else
		std::cout << "its not A nor B nor C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A a = dynamic_cast<A &>(p);
		std::cout << "it's A" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << " A" << std::endl;
	}
	try
	{
		B b = dynamic_cast<B &>(p);
		std::cout << "it's B" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << " B" << std::endl;
	}
	try
	{
		C c = dynamic_cast<C &>(p);
		std::cout << "it's C" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what()  << " C" << std::endl;
	}
}

int	main()
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	Base *base = generate();
	
	identify(base);
	std::cout << std::endl;
	identify(*base);

	delete (base);
}
