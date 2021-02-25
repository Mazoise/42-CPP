/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 10:15:36 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/24 17:17:18 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
Form("shrubbery creation" , 145, 137)
{
	this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs) :
Form(rhs)
{ *this = rhs; }

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    this->setTarget(rhs.getTarget());
	return (*this);
}

void					ShrubberyCreationForm::runForm(void) const
{
	std::ofstream	outfile((this->getTarget() + "_shrubbery").c_str());
	if (outfile.fail())
		throw std::iostream::failure(strerror(errno));
	outfile << "                                              ." << std::endl;
	outfile << "                                              ." << std::endl;
	outfile << "                                   .         ;" << std::endl;
	outfile << "      .              .              ;%     ;;" << std::endl;
	outfile << "        ,           ,                :;%  %;" << std::endl;
	outfile << "         :         ;                   :;%;'     .," << std::endl;
	outfile << ",.        %;     %;            ;        %;'    ,;" << std::endl;
	outfile << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	outfile << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
	outfile << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	outfile << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	outfile << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	outfile << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
	outfile << "           `@%:.  :;%.         ;@@%;'" << std::endl;
	outfile << "             `@%.  `;@%.      ;@@%;" << std::endl;
	outfile << "               `@%%. `@%%    ;@@%;" << std::endl;
	outfile << "                 ;@%. :@%%  %@@%;" << std::endl;
	outfile << "                   %@bd%%%bd%%:;" << std::endl;
	outfile << "                     #@%%%%%:;;" << std::endl;
	outfile << "                     %@@%%%::;" << std::endl;
	outfile << "                     %@@@%(o);  . '" << std::endl;
	outfile << "                     %@@@o%;:(.,'" << std::endl;
	outfile << "                 `.. %@@@o%::;" << std::endl;
	outfile << "                    `)@@@o%::;" << std::endl;
	outfile << "                     %@@(o)::;" << std::endl;
	outfile << "                    .%@@@@%::;" << std::endl;
	outfile << "                    ;%@@@@%::;." << std::endl;
	outfile << "                   ;%@@@@%%:;;;." << std::endl;
	outfile << "               ...;%@@@@@%%:;;;;,.." << std::endl;

	outfile.close();
}
