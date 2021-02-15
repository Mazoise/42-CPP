/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:29:06 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/12 23:16:10 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap("No Name", "N1NJ4-TP", 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << "\e[1mNinjaTrap Default Constructor Call :\e[0m \"Let's get this party started!\"" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, "N1NJ4-TP", 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << "\e[1mNinjaTrap Name Constructor Call :\e[0m \"Let's get this party started!\"" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &rhs) : ClapTrap(rhs)
{
	std::cout << "\e[1mNinjaTrap Copy Constructor Call :\e[0m \"Glitching weirdness is a term of endearment, right?\"" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "\e[1mNinjaTrap Destructor Call :\e[0m \"Is that what people look like inside?\"" << std::endl << std::endl;
}

NinjaTrap 	&NinjaTrap::operator=(NinjaTrap const &rhs)
{ 
	ClapTrap::operator=(rhs);
	return *this;
}

void		NinjaTrap::ninjaShoebox(NinjaTrap &ninja)
{
	if (this == &ninja)
		std::cout << this->_type << " " << this->_name << " looks at his own reflection in the mirror" << std::endl;
	else
		std::cout << this->_type << " " << this->_name << " chills with his " << ninja.getType() << " collegue " << ninja.getName() << std::endl;
}

void		NinjaTrap::ninjaShoebox(ClapTrap &clap)
{
	std::cout <<  this->_type << " " << this->_name << " playes hide and seek with his " << clap.getType() << " collegue " << clap.getName() << std::endl;
}

void		NinjaTrap::ninjaShoebox(FragTrap &frag)
{
	std::cout <<  this->_type << " " << this->_name << " compares his code implementation with his " << frag.getType() << " collegue " << frag.getName() << std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap &scav)
{
	std::cout <<  this->_type << " " << this->_name << " starts a beatbox challenge with his " << scav.getType() << " collegue " << scav.getName() << std::endl;
}
