/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:03:47 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/25 16:07:14 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	WrongCat();
	WrongCat(std::string name);
	~WrongCat();
	WrongCat(WrongCat const &copy);
	WrongCat	&operator=(WrongCat const &egal);
	std::string	getType(void) const;
	void	makeSound() const;

	private:

};

#endif
