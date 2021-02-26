/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 11:24:25 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/26 15:21:48 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

void	*serialize(void)
{
	Data	*rand_data = new Data;
	static const char alphanum[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < 8; i++)
	{
		rand_data->s1 += alphanum[std::rand() % 62];
		rand_data->s2 += alphanum[std::rand() % 62];
	}
	if (std::rand() % 2)
		rand_data->n = std::rand();
	else
		rand_data->n = -1 * std::rand();
	return (reinterpret_cast<void *>(rand_data));
}

Data	*deserialize(void *raw)
{
	Data	*rand_data = reinterpret_cast<Data *>(raw);
	Data	*ret_data = new Data;

	ret_data->s1 = rand_data->s1;
	ret_data->n = rand_data->n;
	ret_data->s2 = rand_data->s2;
	return (ret_data);
}

void	test()
{
	void	*raw;
	Data	*rand_data;

	raw = serialize();
	rand_data = deserialize(raw);
	std::cout << "s1 : \"" << rand_data->s1 << "\"" << std::endl;
	std::cout << "n  : " << rand_data->n << std::endl;
	std::cout << "s2 : \"" << rand_data->s2 << "\"" << std::endl;
	std::cout << std::endl;

	delete reinterpret_cast<Data *>(raw);
	delete rand_data;
}

int		main()
{
	std::srand(std::time(0));
	test();
	test();
	test();
	test();
}
