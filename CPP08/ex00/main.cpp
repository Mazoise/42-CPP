/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 13:34:38 by mchardin          #+#    #+#             */
/*   Updated: 2021/03/02 09:27:54 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main()
{
	std::cout << std::endl << "Creating list container ... " << std::endl;
	std::list<int>		lst_test;
	
	std::cout << "Pushing values 12, 24, 42, 8, -13" << std::endl;
	lst_test.push_back(12);
	lst_test.push_back(24);
	lst_test.push_back(42);
	lst_test.push_back(8);
	lst_test.push_back(-13);

	std::cout << "Running Easyfind(-13) ... " << std::endl;
	try
	{
		std::cout << easyfind<std::list<int> >(lst_test, -13) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << "Running Easyfind(41) ... " << std::endl;
	try
	{
		std::cout << easyfind<std::list<int> >(lst_test, 41) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << std::endl << "Creating vector container with 42 times the value of 12... " << std::endl;
	std::vector<int>	vect_test(42, 12);
	std::cout << "Running Easyfind(12) ... " << std::endl;
	try
	{
		std::cout << easyfind<std::vector<int> >(vect_test, 12) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << "Running Easyfind(18) ... " << std::endl;
	try
	{
		std::cout << easyfind<std::vector<int> >(vect_test, 18) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	
	std::cout << std::endl << "Creating deque container ... " << std::endl;
	std::deque<int>		deque_test;
	
	std::cout << "Pushing values -23, 2490, 42, 8, 42, 42, 8, -20" << std::endl;
	deque_test.push_back(-23);
	deque_test.push_back(2490);
	deque_test.push_back(42);
	deque_test.push_back(8);
	deque_test.push_back(42);
	deque_test.push_back(42);
	deque_test.push_back(8);
	deque_test.push_back(-20);

	std::cout << "Running Easyfind(42) ... " << std::endl;
	try
	{
		std::cout << easyfind<std::deque<int> >(deque_test, 42) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << "Running Easyfind(-12) ... " << std::endl;
	try
	{
		std::cout << easyfind<std::deque<int> >(deque_test, -12) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << std::endl << "Creating empty deque container ... " << std::endl;
	std::deque<int>		empty_test;
	std::cout << "Running Easyfind(42) ... " << std::endl;
	try
	{
		std::cout << easyfind<std::deque<int> >(empty_test, 42) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
}
