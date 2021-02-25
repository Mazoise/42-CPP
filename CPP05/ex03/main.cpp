/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:42:51 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/24 19:39:13 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	std::srand(std::time(0));
	Bureaucrat dylan = Bureaucrat("Dylan", 5);
	Bureaucrat kim = Bureaucrat("Kim", 26);
	Intern trash;
	std::cout << dylan;
	std::cout << kim;
	try
	{
		std::cout << std::endl;
		std::cout << "Calling intern to make shrubbery creation form..." << std::endl;
		Form *shrubbery = trash.makeForm("shrubbery creation", "Garden");
		std::cout << *shrubbery;
		std::cout << "Signing Form ..." << std::endl;
		dylan.signForm(*shrubbery);
		std::cout << "Executing Form ..." << std::endl;
		dylan.executeForm(*shrubbery);
		delete shrubbery;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl;
		std::cout << "Calling intern to make presidential pardon form..." << std::endl;
		Form *president = trash.makeForm("presidential pardon", "Slatibarfast");
		std::cout << *president;
		delete president;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl;
		std::cout << "Calling intern to make robotomy request form..." << std::endl;
		Form *robotomy = trash.makeForm("robotomy request", "Marvin");
		std::cout << *robotomy;
		delete robotomy;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl;
		std::cout << "Calling intern to make intern rights form..." << std::endl;
		Form *internRights = trash.makeForm("intern rights", "Interns");
		std::cout << *internRights;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
