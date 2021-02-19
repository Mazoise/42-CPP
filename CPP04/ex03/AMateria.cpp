/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:30:16 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/18 21:00:42 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _xp(0), _type(type) {}

AMateria::AMateria(AMateria const &rhs) { *this = rhs; }

AMateria::~AMateria(void) {}

AMateria			&AMateria::operator=(AMateria const &rhs)
{
	this->_xp = rhs.getXP();
	return (*this);
}

std::string const 	&AMateria::getType() const { return (this->_type); }
void				AMateria::addXP() { this->_xp += 10; }

unsigned int		AMateria::getXP() const	{ return (this->_xp); }

void				AMateria::use(ICharacter &target)
{
	addXP();
	(void)target;
}
