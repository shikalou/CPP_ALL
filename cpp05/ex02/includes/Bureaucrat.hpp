/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:03:37 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/03 13:20:42 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Form;

class Bureaucrat
{
	public :
		Bureaucrat(std::string name = "default", unsigned int grade = 150);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &egal);


		const std::string	getName() const;
		unsigned int		getGrade() const;
		void				decrementGrade();
		void				incrementGrade();
		void				signForm(Form &doc);
		void				executeForm(Form const & form);

		class GradeTooHighException : public std::exception
		{
			const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			const char *what() const throw();
		};

	private :
		const std::string	_name;
		unsigned int		_grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &buro);

#endif