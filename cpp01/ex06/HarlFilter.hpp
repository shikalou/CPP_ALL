/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:56:45 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/04 10:47:02 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	public:
	Harl();
	~Harl();
	void complain(std::string level);

	private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif