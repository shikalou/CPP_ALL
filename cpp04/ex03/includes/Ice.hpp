/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:01:24 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/27 17:22:49 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
	Ice();
	~Ice();
	Ice(Ice const &copy);
	Ice &operator=(Ice const &egal);
	void		use(ICharacter &target);
	AMateria	*clone() const;

	private:
	std::string _type;

};

#endif
