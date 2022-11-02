/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:19:52 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/02 19:21:22 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
	public :
		Form(std::string name = "default", unsigned int sign = 150, unsigned int exec = 150);
		~Form();
		Form(const Form &copy);
		Form &operator=(const Form &egal);

		const std::string	getName() const;
		bool				getStatus() const;
		unsigned int		getGradeS() const;
		unsigned int		getGradeE() const;
		void				beSigned(Bureaucrat &buro);
		virtual void		execute(Bureaucrat const &exectutor) const = 0;
		

		class GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};

	protected:
		const std::string	_name;
		bool				_isSigned;
		const unsigned int	_signGrade;
		const unsigned int	_execGrade;
	private :
};

std::ostream &operator<<(std::ostream &os, const Form &doc);

#endif