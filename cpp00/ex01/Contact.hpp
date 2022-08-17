/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:44:04 by ldinaut           #+#    #+#             */
/*   Updated: 2022/08/18 00:06:54 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>



class Contact
{
	public: //methodes (prototypes des fonctions)

	Contact();
	void	FillContact();
	void	Print(int i);
	void	PrintDetail();

	private://attributs (variables de la class/structure)
	std::string m_firstname;
	std::string m_lastname;
	std::string m_nickname;
	std::string m_phone;
	std::string m_secret;
};

#endif