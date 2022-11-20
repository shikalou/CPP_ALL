/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:54:57 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/20 22:42:09 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack
{
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack &copy);
		MutantStack	&operator=(const MutantStack &egal);
		
		MutantStack<T>::iterator begin();
		MutantStack<T>::iterator end();

	private:

};

#endif