/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 17:07:00 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/10 14:03:59 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cstring>
#include <iostream>
#include <cerrno>
#include <fstream>

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Input Error : Wrong number of arguments" << std::endl;
		return (1);
	}

	std::string input_file = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (input_file == "" || s1 == "" || s2 == "")
	{
		std::cerr << "Input Error : Empty string" << std::endl;
		return (1);
	}
	std::ifstream  infile(argv[1]);
	if (infile.fail())
	{
		std::cerr << "Input File Error : " << strerror(errno) << std::endl;
		return (1);
	}
	std::string read_line;
	size_t 		pos = 0;

	std::getline(infile, read_line, char(infile.eof()));
	if (infile.fail())
	{
		std::cerr << "File Read Error : " << strerror(errno) << std::endl;
		infile.close();
		return (1);
	}
	while ((pos = read_line.find(s1, pos)) != std::string::npos)
	{
		read_line.replace(pos, s1.length(), s2);
		pos += s1.length();
	}
	std::ofstream  outfile(input_file.append(".replace").c_str());
	if (outfile.fail())
	{
		std::cerr << "Output File Error : " << strerror(errno) << std::endl;
		infile.close();
		return (1);
	}
	outfile << read_line;
	infile.close();
	outfile.close();
	return (0);
}
