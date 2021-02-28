/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 09:59:53 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/28 11:55:42 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void	my_tests()
{
	std::cout << "Creating empty array ..." << std::endl;
	Array<int>		test1;
	try
	{
		std::cout << "Size : " << test1.size() << std::endl;
		std::cout << "Trying to print array[0] ..." << std::endl;
		std::cout << test1[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Creating 3 element string array ..." << std::endl;
	Array<std::string>		test5(3);
	std::string				str[] = {"baba", "au", "rhum"};
	try
	{
		std::cout << "Size : " << test5.size() << std::endl;
		std::cout << "Filling array with \"baba au rhum\" ..." << std::endl;
		for (unsigned int i = 0; i < test5.size(); i++)
		{
			test5[i] = str[i];
			std::cout << "array[" << i << "] = " << test5[i] << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Creating 12 element float array ..." << std::endl;
	Array<float>	test2(12);
	try
	{
		std::cout << "Size : " << test2.size() << std::endl;
		std::cout << "Filling array with index + 0.1 ..." << std::endl;
		for (unsigned int i = 0; i < test2.size(); i++)
		{
			test2[i] = i + 0.01;
			std::cout << "array[" << i << "] = " << test2[i] << std::endl;
		}
		std::cout << "Trying to print array[12] ..." << std::endl;
		std::cout << test2[12] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Creating copy of float array ..." << std::endl;
	Array<float>	test3(test2);
	try
	{
		std::cout << "Size : " << test3.size() << std::endl;
		std::cout << "array[" << 3 << "] = " << test3[3] << std::endl;
		std::cout << "array[" << 11 << "] = " << test3[11] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Creating 5 element Awesome class array ..." << std::endl;
	Array<Awesome>	test4(5);
	try
	{
		std::cout << "Size : " << test4.size() << std::endl;
		for (unsigned int i = 0; i < test4.size(); i++)
			std::cout << "array[" << i << "] = " << test4[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
}

int main()
{
	my_tests();
}
