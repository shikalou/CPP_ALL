/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:17:00 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/03 12:35:26 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(Bureaucrat &buro);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &egal);

		void	execute(Bureaucrat const &executor);
	private:
		Bureaucrat &_target;
};

#endif