/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:50:56 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/09 17:27:32 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data titi;
	titi.str = "salut les potos";
	titi.i = 5;

	std::cout << "str = " << titi.str << std::endl << "addr = " << &titi.str << std::endl;
	std::cout << "i = " << titi.i << std::endl << "addr = " << &titi.i << std::endl << std::endl;

	uintptr_t serial = serialize(&titi);
	Data *deserial = deserialize(serial);

	std::cout << "str = " << deserial->str << std::endl << "addr = " << &deserial->str << std::endl;
	std::cout << "i = " << deserial->i << std::endl << "addr = " << &deserial->i << std::endl;
}
