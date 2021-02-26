/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:43:26 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/25 13:38:20 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>

bool	inputIsInt(const std::string input_str)
{
	for (size_t i = 0; i < input_str.length(); i++)
		if (!((input_str[i] >= '0' && input_str[i] <= '9')
		|| (i == 0 && input_str[i] == '-')))
			return (false);
	return (true);
}

bool	inputIsChar(const std::string input_str)
{
	if (input_str.length() > 1)
		return (false);
	return (true);
}

bool	inputIsFloat(const std::string input_str)
{
	bool	point = false;

	if (input_str == "+inff" || input_str == "-inff" || input_str == "nanf")
		return (true);
	for (size_t i = 0; i < input_str.length() - 1; i++)
	{
		if (!((input_str[i] >= '0' && input_str[i] <= '9')
		|| (i == 0 && input_str[i] == '-')
		|| (point == false && input_str[i] == '.')))
			return (false);
		if (input_str[i] == '.')
			point = true;
	}
	if (input_str[input_str.length() - 1] != 'f')
		return (false);
	return (true);
}

bool	inputIsDouble(const std::string input_str)
{
	bool	point = false;

	if (input_str == "+inf" || input_str == "-inf" || input_str == "nan")
		return (true);
	for (size_t i = 0; i < input_str.length(); i++)
	{
		if (!((input_str[i] >= '0' && input_str[i] <= '9')
		|| (i == 0 && input_str[i] == '-')
		|| (point == false && input_str[i] == '.')))
			return (false);
		if (input_str[i] == '.')
			point = true;
	}
	return (true);
}
