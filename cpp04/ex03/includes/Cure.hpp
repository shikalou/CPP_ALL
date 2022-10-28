/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:46:10 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/27 17:22:47 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
	Cure();
	~Cure();
	Cure(Cure const &copy);
	Cure &operator=(Cure const &egal);
	void		use(ICharacter &target);
	AMateria	*clone() const;

	private:
	std::string _type;
};

#endif
