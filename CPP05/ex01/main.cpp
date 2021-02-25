/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:42:51 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/24 16:17:31 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		std::cout << std::endl;
		Bureaucrat dylan = Bureaucrat("Dylan", 2);
		Form vogonRights = Form("Vogon Rights", 1, 12);
		// Form vogonRights_copy = Form(vogonRights);
		std::cout << dylan;
		std::cout << vogonRights;
		// std::cout << vogonRights_copy;
		std::cout << "Signing Form ..." << std::endl;
		dylan.signForm(vogonRights);
		std::cout << vogonRights;
		std::cout << "Incrementing grade ..." << std::endl;
		dylan.incremGrade();
		std::cout << dylan;
		std::cout << "Signing Form ..." << std::endl;
		dylan.signForm(vogonRights);
		std::cout << vogonRights;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl;
		std::cout << "Creating form with signing grade 0 ..." << std::endl;
		Form signFail = Form("Sign Fail", 0, 112);
		std::cout << signFail;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl;
		std::cout << "Creating form with execution grade 151 ..." << std::endl;
		Form execFail = Form("Exec Fail", 12, 151);
		std::cout << execFail;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
