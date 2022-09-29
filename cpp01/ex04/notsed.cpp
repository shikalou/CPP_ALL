/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   notsed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:12:50 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/29 18:55:27 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "notsed.hpp"

void	notsed(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	infile;
	std::string	out = filename + ".replace";
	std::ofstream	outfile(out);

	infile.open(filename);

	infile << "BLABLABLA";
	
}