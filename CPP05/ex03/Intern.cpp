/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:09:14 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/24 19:34:57 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const &rhs) { *this = rhs; }

Intern::~Intern(void) {}

Intern &Intern::operator=(Intern const &rhs)
{
	(void)rhs;
    return (*this);
}

Form		*Intern::makeForm(std::string const &formName, std::string const &formTarget) const
{
	std::string const formNames[] 		= {	"presidential pardon",
											"robotomy request",
											"shrubbery creation"};
	formPrototype const formFunction[] 	= {	&createPresidentialPardonForm,
											&createRobotomyRequestForm,
											&createShrubberyCreationForm};

	for (int i = 0; i < 3; i++)
		if (formNames[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (formFunction[i](formTarget));
		}
	throw (Intern::WrongFormException());
	return (0);
}

Form		*Intern::createPresidentialPardonForm(std::string const &formTarget)
{
	return (new PresidentialPardonForm(formTarget));
}

Form		*Intern::createRobotomyRequestForm(std::string const &formTarget)
{
	return (new RobotomyRequestForm(formTarget));
}

Form		*Intern::createShrubberyCreationForm(std::string const &formTarget)
{
	return (new ShrubberyCreationForm(formTarget));
}
