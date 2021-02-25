/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:42:51 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/23 18:53:58 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat kim = Bureaucrat("Kim", 1);
		std::cout << kim;
		std::cout << "Decrementing grade ..." << std::endl;
		kim.decremGrade();
		std::cout << kim;
		std::cout << "Incrementing grade ..." << std::endl;
		kim.incremGrade();
		std::cout << kim;
		std::cout << "Incrementing grade ..." << std::endl;
		kim.incremGrade();
		std::cout << kim;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl;
		Bureaucrat dylan = Bureaucrat("Dylan", 150);
		// Bureaucrat dylan_copy = Bureaucrat(dylan);
		std::cout << dylan;
		// std::cout << dylan_copy;
		std::cout << "Incrementing grade ..." << std::endl;
		dylan.incremGrade();
		std::cout << dylan;
		std::cout << "Decrementing grade ..." << std::endl;
		dylan.decremGrade();
		std::cout << dylan;
		std::cout << "Decrementing grade ..." << std::endl;
		dylan.decremGrade();
		std::cout << dylan;
		std::cout << "Decrementing grade ..." << std::endl;
		dylan.decremGrade();
		std::cout << dylan;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl;
		std::cout << "Creating grade 0 bureaucrate ..." << std::endl;
		Bureaucrat brian = Bureaucrat("Brian", 0);
		std::cout << brian;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl;
		std::cout << "Creating grade 151 bureaucrate ..." << std::endl;
		Bureaucrat veronica = Bureaucrat("Veronica", 151);
		std::cout << veronica;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
