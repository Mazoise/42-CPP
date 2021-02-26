/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   out.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 19:09:16 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/26 15:08:09 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

std::string const		double_to_string(double double_value)
{
	std::string		double_string;

	std::stringstream ss (std::stringstream::in | std::stringstream::out);
	ss << double_value;
	double_string = ss.str();
	for (size_t i = 0; i < double_string.length(); i++)
		if (double_string[i] == '.' || double_string[i] == 'e' || double_string[i] == 'n')
			return (double_string);
	return (double_string + ".0");
}

std::string const		float_to_string(float float_value)
{
	std::string		float_string;

	std::stringstream ss (std::stringstream::in | std::stringstream::out);
	ss << float_value;
	float_string = ss.str();
	for (size_t i = 0; i < float_string.length(); i++)
		if (float_string[i] == '.' || float_string[i] == 'e' || float_string[i] == 'n')
			return (float_string + "f");
	return (float_string + ".0f");
}

void					outputFromInt(int int_value)
{
	if (int_value >= ' ' && int_value <= '~')
		std::cout << "char : \'" << static_cast<char>(int_value) << "\'" << std::endl;
	else if (int_value >= std::numeric_limits<char>::min() && int_value <= std::numeric_limits<char>::max())
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : impossible" << std::endl;
	std::cout << "int : " << int_value << std::endl;
	std::cout << "float : " << float_to_string(static_cast<float>(int_value)) << std::endl;
	std::cout << "double : " << double_to_string(static_cast<double>(int_value)) << std::endl;
}

void					outputFromChar(char char_value)
{
	std::cout << "char : \'" << char_value << "\'" << std::endl;
	std::cout << "int : " << static_cast<int>(char_value) << std::endl;
	std::cout << "float : " << float_to_string(static_cast<float>(char_value)) << std::endl;
	std::cout << "double : " << double_to_string(static_cast<double>(char_value)) << std::endl;
}

void					outputFromFloat(float float_value)
{
	if (float_value >= ' ' && float_value <= '~'
	&& float_value == float_value)
		std::cout << "char : \'" << static_cast<char>(float_value) << "\'" << std::endl;
	else if (float_value >= std::numeric_limits<char>::min()
	&& float_value <= std::numeric_limits<char>::max()
	&& float_value == float_value)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : impossible" << std::endl;
	if (float_value >= std::numeric_limits<int>::min()
	&& float_value <= std::numeric_limits<int>::max()
	&& float_value == float_value)
		std::cout << "int : " << static_cast<int>(float_value)<< std::endl;
	else
		std::cout << "int : impossible" << std::endl;
	std::cout << "float : " << float_to_string(float_value) << std::endl;
	std::cout << "double : " << double_to_string(static_cast<double>(float_value)) << std::endl;
}

void					outputFromDouble(double double_value)
{
	if (double_value >= ' ' && double_value <= '~'
	&& double_value == double_value)
		std::cout << "char : \'" << static_cast<char>(double_value) << "\'" << std::endl;
	else if (double_value >= std::numeric_limits<char>::min()
	&& double_value <= std::numeric_limits<char>::max()
	&& double_value == double_value)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : impossible" << std::endl;
	if (double_value >= std::numeric_limits<int>::min()
	&& double_value <= std::numeric_limits<int>::max()
	&& double_value == double_value)
		std::cout << "int : " << static_cast<int>(double_value) << std::endl;
	else
		std::cout << "int : impossible" << std::endl;
	std::cout << "float : " << float_to_string(static_cast<double>(double_value)) << std::endl;
	std::cout << "double : " << double_to_string(double_value) << std::endl;
}
