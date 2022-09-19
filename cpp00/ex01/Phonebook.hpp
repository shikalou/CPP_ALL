/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:05:25 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/20 00:34:21 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cctype>
# include <cstdlib>
# include "Contact.hpp"

class Phonebook
{
	public :
	Phonebook();
	~Phonebook();
	void	CreateContact();
	void	PrintContact();
	int		CheckIndex(std::string str);

	private :
	int	_index;
	Contact _contactList[8];
};

#endif