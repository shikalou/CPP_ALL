/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:34:11 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/03 21:12:02 by ldinaut          ###   ########.fr       */
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
		Form *newShruberry(std::string targetName);
		Form *newRobotomy(std::string targetName);
		Form *newPresidential(std::string targetName);
	private:
};



#endif