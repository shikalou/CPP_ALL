/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:34:11 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/03 16:47:11 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
class Form;

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(Intern const &copy);
		Intern &operator=(Intern const &egal);

		Form *makeForm(std::string formName, std::string targetName);
	private:
};



#endif