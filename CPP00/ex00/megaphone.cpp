/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 17:53:49 by mchardin          #+#    #+#             */
/*   Updated: 2020/12/12 18:04:40 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char		*ft_to_upper(char *str)
{
	int		i = 0;
	char	*ret = str;

	while (str[i])
	{
		ret[i] = toupper(str[i]);
		i++;
	}
	return ret;
}

int			main(int argc, char **argv)
{
	int		i = 1;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			std::cout << ft_to_upper(argv[i]);
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}
