/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:07:06 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/25 12:34:15 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
	Cat();
	Cat(std::string name);
	~Cat();
	Cat(Cat const &copy);
	Cat	&operator=(Cat const &egal);
	std::string	getType(void) const;
	void	makeSound() const;

	private:

};

#endif
