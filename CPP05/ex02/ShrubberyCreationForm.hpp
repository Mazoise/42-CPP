/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 10:06:36 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/24 16:52:25 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>
# include <cstring>
# include <cerrno>

class ShrubberyCreationForm : public Form
{
	public :

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &rhs);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm			&operator=(ShrubberyCreationForm const &rhs);

		virtual void		runForm(void) const;

};

#endif