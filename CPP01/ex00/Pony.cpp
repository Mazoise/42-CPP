/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 11:23:24 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/08 16:00:30 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string maincolor, std::string secondarycolor, std::string magicalpower, int age, int height)
{
	std::cout << "Generating pony..." << std::endl << std::endl;
	this->_name = name;
	this->_age = age;
	this->_height = height;
	this->_maincolor = maincolor;
	this->_secondarycolor = secondarycolor;
	this->_magicalpower = magicalpower;
}

Pony::~Pony(void)
{
	std::cout << "Selling " << this->_name << " to the butcher...Oh no !" << std::endl << std::endl;
}

void	Pony::printstats(void) const
{
	std::cout << "Name            : " << this->_name << std::endl;
	std::cout << "Age             : " << this->_age << " years old" << std::endl;
	std::cout << "Height          : " << this->_height << " cm" << std::endl;
	std::cout << "Main color      : " << this->_maincolor << std::endl;
	std::cout << "Secondary color : " << this->_secondarycolor << std::endl;
	std::cout << "Magical power   : " << this->_magicalpower << std::endl << std::endl;
}

void	Pony::jump(void) const
{
	std::cout << this->_name << "'s " << this->_secondarycolor << " mane floats in the wind while he jumps." << std::endl << std::endl;
}

void	Pony::brush(void) const
{
	std::cout << "Shrwish... shrwish..." << std::endl;
	std::cout << "My brush is full of " << this->_name << "'s " << this->_maincolor << " hairs." << std::endl << std::endl;
}
