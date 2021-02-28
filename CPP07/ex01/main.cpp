/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 09:59:53 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/28 12:26:02 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	my_tests()
{
	std::string		a[] = {"baba", "au", "rhum"};
	char			b[] = "ontkds";
	float			c[] = { 0.1f, 1.2f, 2.3f, 3.4f, 4.5f };

	std::cout << std::endl << "Printing string array of size 3 with space as separator ..." << std::endl;
	iter(a, 3, print_space);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Printing  char* of size 6 with space as separator ..." << std::endl;
	iter(b, 6, print_space);
	std::cout << std::endl;
	std::cout << "Incrementing each element of char* ..." << std::endl;
	iter(b, 6, increm);
	iter(b, 6, print_space);
	std::cout << std::endl;
	std::cout << "Incrementing each element of char* ..." << std::endl;
	iter(b, 6, increm);
	iter(b, 6, print_space);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Printing float array of size 5 with space as separator ..." << std::endl;
	iter(c, 5, print_space);
	std::cout << std::endl;
	std::cout << "Incrementing each element of float array ..." << std::endl;
	iter(c, 5, increm);
	iter(c, 5, print_space);
	std::cout << std::endl;
	std::cout << std::endl;
}

void	correc_tests()
{
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	std::cout << "Printing int array of size 5 with newline as separator ..." << std::endl;
	iter(tab, 5, print);
	std::cout << std::endl << "Printing Awesome class array of size 5 with newline as separator ..." << std::endl;
	iter(tab2, 5, print);
}

int main()
{
	my_tests();
	correc_tests();
}
