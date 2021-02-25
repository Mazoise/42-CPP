/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:42:51 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/24 16:53:41 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::srand(std::time(0));
	Bureaucrat dylan = Bureaucrat("Dylan", 5);
	Bureaucrat kim = Bureaucrat("Kim", 26);
	std::cout << dylan;
	std::cout << kim;
	try
	{
		std::cout << std::endl;
		ShrubberyCreationForm shrubbery = ShrubberyCreationForm("Garden");
		std::cout << shrubbery;
		std::cout << "Signing Form ..." << std::endl;
		dylan.signForm(shrubbery);
		std::cout << "Executing Form ..." << std::endl;
		dylan.executeForm(shrubbery);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl;
		PresidentialPardonForm president = PresidentialPardonForm("Slatibarfast");
		std::cout << president;
		std::cout << "Signing Form ..." << std::endl;
		dylan.signForm(president);
		std::cout << "Executing Form ..." << std::endl;
		kim.executeForm(president);
		dylan.executeForm(president);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl;
		RobotomyRequestForm robotomy = RobotomyRequestForm("Marvin");
		std::cout << robotomy;
		std::cout << "Executing Form ..." << std::endl;
		dylan.executeForm(robotomy);
		std::cout << "Signing Form ..." << std::endl;
		dylan.signForm(robotomy);
		std::cout << "Executing Form ..." << std::endl;
		dylan.executeForm(robotomy);
		dylan.executeForm(robotomy);
		dylan.executeForm(robotomy);
		dylan.executeForm(robotomy);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
