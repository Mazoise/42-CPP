/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 17:23:09 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/24 16:42:40 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	setGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs) : _name(rhs._name) { *this = rhs; }

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->_grade = rhs._grade;
    return (*this);
}

void				Bureaucrat::incremGrade(void)
{
	setGrade(this->_grade - 1);
}

void				Bureaucrat::decremGrade(void)
{
	setGrade(this->_grade + 1);
}

void				Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade = grade;
}

void				Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signs " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << this->_name << " cannot sign " << form.getName() << " because : " << e.what() << std::endl;
	}
}

void				Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executes " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << this->_name << " cannot execute " << form.getName() << " because : " << e.what() << std::endl;
	}
}

std::string const	&Bureaucrat::getName(void) const { return (this->_name); }
int					Bureaucrat::getGrade(void) const { return (this->_grade); }

std::ostream		&operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
}
