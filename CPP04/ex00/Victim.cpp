/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:48:28 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/16 12:03:40 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name)
{
	this->_name = name;
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &rhs)
{
	*this = rhs;
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim	&Victim::operator=(Victim const &rhs)
{
	this->_name = rhs.getName();
	return (*this);
}

void			Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

void			Victim::setName(std::string name) { this->_name = name; }

std::string		Victim::getName(void) const { return this->_name; }

std::ostream	&operator<<(std::ostream &o, Victim const &rhs)
{
        o << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
        return (o);
}
