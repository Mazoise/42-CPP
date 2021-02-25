/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 10:07:37 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/24 15:51:59 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public :

		Form(void);
		Form(std::string name, int signGrade, int execGrade);
		Form(Form const &rhs);
		virtual ~Form(void);
		Form			&operator=(Form const &rhs);
	
		std::string const	&getName(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;
		bool				getSigned(void) const;
		void				beSigned(Bureaucrat const &bureaucrat);

		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("Grade is too low");
			}
		};
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("Grade is too high");
			}
		};
		class FormAlreadySignedException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("Form has already been signed");
			}
		};

	private :

		std::string const	_name;
		int const			_signGrade;
		int const			_execGrade;
		bool				_signed;
};

std::ostream    &operator<<(std::ostream &o, Form const &rhs);

#endif