/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:48:28 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/16 12:03:40 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	this->_name = name;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &rhs) : Victim(rhs)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon	&Peon::operator=(Peon const &rhs)
{
	Victim::operator=(rhs);
	return (*this);
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
