/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:04:29 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/25 16:34:06 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
	WrongAnimal();
	WrongAnimal(std::string name);
	virtual ~WrongAnimal();
	WrongAnimal(WrongAnimal const &copy);
	WrongAnimal	&operator=(WrongAnimal const &egal);
	virtual void	makeSound(void) const;
	std::string	getType(void) const;

	protected:
	std::string _type;

	private:
};

#endif
