/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 17:34:44 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/24 14:42:08 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public :

		Bureaucrat(void);
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &rhs);
		virtual ~Bureaucrat(void);
		Bureaucrat			&operator=(Bureaucrat const &rhs);
		
		std::string const	&getName(void) const;
		int					getGrade(void) const;
		void				setGrade(int grade);

		void				incremGrade(void);
		void				decremGrade(void);
		void				signForm(Form &form) const;

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

	private :

		std::string const	_name;
		int					_grade;
};

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif