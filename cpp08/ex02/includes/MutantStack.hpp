/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:54:57 by ldinaut           #+#    #+#             */
/*   Updated: 2022/11/21 16:19:08 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack &copy);
		MutantStack	&operator=(const MutantStack &egal);

		typedef typename	std::stack<T>::container_type::iterator iterator;

		iterator begin();
		iterator end();
		
	private:
};

#include "MutantStack.tpp"

#endif