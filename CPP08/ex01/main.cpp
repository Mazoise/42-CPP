/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 13:34:36 by mchardin          #+#    #+#             */
/*   Updated: 2021/03/02 10:29:20 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		rand_fct(void)
{
	if (rand() % 2)
		return (std::rand());
	else
		return (-1 * std::rand());
}

int main()
{
	std::cout << std::endl << "Creating Span class of size 5 ..." << std::endl;
	Span sp = Span(5);
	std::cout << "Filling with values 5, 3, 17, 9, 11 ..." << std::endl;
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Shortest Span : ";
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span : ";
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "Filling with value 42 ..." << std::endl;
	try
	{
		sp.addNumber(42);
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}

	std::cout << std::endl << "Creating Span class of size 12 ..." << std::endl;
	Span sp2 = Span(12);
	std::cout << "Shortest Span : ";
	try
	{
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << "Filling with value 42 ..." << std::endl;
	sp2.addNumber(42);
	std::cout << "Longest Span : ";
	try
	{
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << "Filling with value 42 ..." << std::endl;
	sp2.addNumber(42);
	std::cout << "Longest Span : ";
	std::cout << sp2.longestSpan() << std::endl;
	std::cout << "Shortest Span : ";
	std::cout << sp2.shortestSpan() << std::endl;

	std::cout << std::endl << "Creating Span class of size 40 000 ..." << std::endl;
	Span sp3 = Span(40000);
	std::srand(time(0));
	std::vector<int> rand_vector(25000);
	generate(rand_vector.begin(), rand_vector.end(), rand_fct);
	std::cout << "Shortest Span : ";

	std::cout << "Filling with 25000 random values ..." << std::endl;
	try
	{
		sp3.addNumber(rand_vector.begin(), rand_vector.end());
		std::cout << "Longest Span : ";
		std::cout << sp3.longestSpan() << std::endl;
		std::cout << "Shortest Span : ";
		std::cout << sp3.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << "Filling with 25000 more values ..." << std::endl;
	try
	{
		sp3.addNumber(rand_vector.begin(), rand_vector.end());
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
}
