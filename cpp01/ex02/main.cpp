/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:39:17 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/28 15:39:50 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "adresse memoire de str   -> " << &str << std::endl;
	std::cout << "adresse stockee dans PTR -> " << stringPTR << std::endl;
	std::cout << "adresse stockee dans REF -> " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "valeur de la string    -> "<< str << std::endl;
	std::cout << "valeur pointee par PTR -> " << *stringPTR << std::endl;
	std::cout << "valeur pointee par REF -> " << stringREF << std::endl;

}