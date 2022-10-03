/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   notsed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:12:50 by ldinaut           #+#    #+#             */
/*   Updated: 2022/10/03 14:38:54 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "notsed.hpp"

std::string	ft_replace(std::string s1, std::string s2, std::string stock)
{
	std::size_t	ret = stock.find(s1);
	while (ret != std::string::npos)
	{
		stock.erase(ret, s1.length());
		stock.insert(ret, s2);
		ret = stock.find(s1);
	}
	return (stock);
}

void	notsed(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	infile;
	std::string		out = filename + ".replace";
	std::ofstream	outfile;
	std::string		stock;

	infile.open(filename.c_str());
	outfile.open(out.c_str());
	while (getline(infile, stock))
	{
		outfile << ft_replace(s1, s2, stock) << std::endl;
	}
}