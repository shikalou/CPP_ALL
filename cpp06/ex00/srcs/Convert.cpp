/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:56:33 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/08 16:52:49 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
	// std::cout << "Convert default construtor called" << std::endl;
}

Convert::~Convert()
{
	// std::cout << "Convert default destructor called" << std::endl;
}

Convert::Convert(Convert const &copy)
{
	// std::cout << "Convert copy construtor called" << std::endl;
	*this = copy;
}

Convert	&Convert::operator=(Convert const &egal)
{
	(void)egal;
	return (*this);
}

void	Convert::checkType(char *str)
{
	checkChar(str);
}

// void	Convert::checkChar(char *str)
// {
// 	if (strlen(str) == 1 && isascii((str[0])))
// 	{
// 		if (isprint((str[0])))
// 			_resChar = str[0];
// 		else
// 			_resChar = "Non displayable";
// 	}
// }
