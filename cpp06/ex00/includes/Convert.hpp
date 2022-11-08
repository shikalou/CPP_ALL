/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:29:54 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/08 16:45:07 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string.h>

class Convert
{
	public:
		Convert();
		~Convert();
		Convert(Convert const &copy);
		Convert	&operator=(Convert const &egal);

		void	checkType(char *str);

	private:
		void	checkChar(char *str);

		std::string	_resChar;
		int			_resInt;
		float		_resFloat;
		double		_resDouble;
};

std::ostream	&operator<<(std::ostream os, const Convert &convert);

#endif
