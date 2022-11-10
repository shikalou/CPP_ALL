/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:56:33 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/10 14:16:38 by ldinaut          ###   ########.fr       */
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
	_resDouble = atof(str);
	if (strlen(str) == 1 && isascii(str[0]) && !isdigit(str[0]))
		_resDouble = str[0];
	checkChar();
	checkInt();
	checkFloat();
	checkDouble();
}

void	Convert::checkChar()
{
	if (_resDouble >= INTMIN && _resDouble <= INTMAX)
	{
		int i = static_cast<int>(_resDouble);
		if (i >= 32 && i <= 126)
			_resChar = i;
		else
		{
			std::cout << "Char: non displayable" << std::endl;
			return ;
		}
	}
	else
	{
		std::cout << "Char: impossible" << std::endl;
		return ;
	}
	std::cout << "Char: '" << _resChar << "'" << std::endl;
}

void	Convert::checkInt()
{
	if (_resDouble >= INTMIN && _resDouble <= INTMAX)
	{
		std::cout << "Int: " << static_cast<int>(_resDouble) << std::endl;
		return ;
	}
	std::cout << "int: impossible" << std::endl;
}

void	Convert::checkFloat()
{
	if (_resDouble > pow(10, 37) || _resDouble < -pow(10, 37))
		std::cout << "Double: impossible" << std::endl;
	else
		std::cout << "Float: " << std::fixed  << std::setprecision(1) << _resDouble << "f" << std::endl;
}

void	Convert::checkDouble()
{
	if (_resDouble > pow(10, 37) || _resDouble < -pow(10, 37))
		std::cout << "Double: impossible" << std::endl;
	else
		std::cout << "Double: " << _resDouble << std::endl;
}
