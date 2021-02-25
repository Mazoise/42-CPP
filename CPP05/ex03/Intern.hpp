/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:09:08 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/24 19:18:57 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;
class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;

class Intern
{
	public :

		Intern(void);
		Intern(Intern const &rhs);
		virtual ~Intern(void);
		Intern			&operator=(Intern const &rhs);

		Form			*makeForm(std::string const &formName, std::string const &formTarget) const;
		
		class WrongFormException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("Form does not exist");
			}
		};

		typedef Form  *(*formPrototype)(std::string const &formTarget);
		
		static Form		*createPresidentialPardonForm(std::string const &FormTarget);
		static Form		*createRobotomyRequestForm(std::string const &FormTarget);
		static Form		*createShrubberyCreationForm(std::string const &FormTarget);

};

#endif