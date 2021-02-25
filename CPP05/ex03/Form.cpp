/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 10:07:05 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/24 16:52:25 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signGrade, int execGrade) : _name(name),  _target(""), _signGrade(signGrade), _execGrade(execGrade), _signed(false)
{
	if (signGrade < 1 || execGrade < 1)
		throw (Form::GradeTooHighException());
	else if (signGrade > 150 || execGrade > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(Form const &rhs) : _name(rhs.getName()), _signGrade(rhs.getSignGrade()), _execGrade(rhs.getExecGrade())
{ *this = rhs; }

Form::~Form(void) {}

Form &Form::operator=(Form const &rhs)
{
	this->_signed = rhs.getSigned();
	this->_target = rhs.getTarget();
    return (*this);
}

void				Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw (Form::GradeTooLowException());
	else if (this->_signed == true)
		throw (Form::FormAlreadySignedException());
	else
		this->_signed = true;
}

void				Form::execute(Bureaucrat const &executor) const
{
	if (this->_signed == false)
		throw (Form::FormNotSignedException());
	else if (executor.getGrade() > this->_execGrade)
		throw (Form::GradeTooLowException());
	else
		this->runForm();
}

std::string const	&Form::getName(void) const { return (this->_name);}
std::string const	&Form::getTarget(void) const { return (this->_target);}
int					Form::getSignGrade(void) const { return (this->_signGrade);}
int					Form::getExecGrade(void) const { return (this->_execGrade);}
bool				Form::getSigned(void) const { return (this->_signed);}

void				Form::setTarget(std::string const &target) { this->_target = target; }

std::ostream		&operator<<(std::ostream &o, Form const &rhs)
{
	if (rhs.getSigned())
		o << "Signed Form " << rhs.getName() << " can be signed at grade " << rhs.getSignGrade() << " and executed at grade " << rhs.getExecGrade() << std::endl;
	else
		o << "Unsigned Form " << rhs.getName() << " can be signed at grade " << rhs.getSignGrade() << " and executed at grade " << rhs.getExecGrade() << std::endl;
	return (o);
}
