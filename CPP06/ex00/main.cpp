/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:43:32 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/25 20:29:36 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	convert(const std::string str)
{
	int		int_value = 0;
	char	char_value = 0;
	float	float_value = 0;
	double	double_value = 0;

	try
	{
		if (inputIsInt(str))
		{
			int_value = std::stoi(str);
			outputFromInt(int_value);
		}
		else if (inputIsChar(str))
		{
			char_value = str[0];
			outputFromChar(char_value);
		}
		else if (inputIsFloat(str))
		{
			float_value = std::stof(str);
			outputFromFloat(float_value);
		}
		else if (inputIsDouble(str))
		{
			double_value = std::stod(str);
			outputFromDouble(double_value);
		}
		else
		{
			std::cerr << "Input Error : Wrong argument" << std::endl;
			return ;
		}
	}
	catch (std::out_of_range &ofr)
	{
		std::cerr << "Input Error : Out of range" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
		std::cerr << "Input Error : " << e.what() << std::endl;
		return ;
	}
}

int		main(int argc, char **argv)
{

	if (argc != 2)
	{
		std::cerr << "Input Error : Wrong number of arguments" << std::endl;
		return (1);
	}
	else if (!strlen(argv[1]))
	{
		std::cerr << "Input Error : Empty argument" << std::endl;
		return (1);
	}
	convert(argv[1]);
}
