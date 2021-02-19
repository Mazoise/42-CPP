/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:48:28 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/17 20:02:23 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->_name = name;
	this->_title = title;
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &rhs)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
	*this = rhs;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &rhs)
{
	this->_title = rhs.getTitle();
	this->_name = rhs.getName();
	return (*this);
}

void		Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

void			Sorcerer::setName(std::string name) { this->_name = name; }
void			Sorcerer::setTitle(std::string title) {	this->_title = title; }

std::string		Sorcerer::getName(void) const { return this->_name; }
std::string		Sorcerer::getTitle(void) const { return this->_title; }

std::ostream	&operator<<(std::ostream &o, Sorcerer const &rhs)
{
        o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies!" << std::endl;
        return o;
}
