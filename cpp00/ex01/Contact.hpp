/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:07:36 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/19 18:06:59 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact
{
	public :
	Contact();
	void		SetContact();
	void		ResetContact();
	void		Print(int i);
	void		PrintDetail();
	std::string	Resize(std::string str);

	private :
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _phone;
	std::string _secret;

};

#endif
