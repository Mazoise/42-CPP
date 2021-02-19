/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:30:16 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/18 18:43:54 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(Ice const &rhs) : AMateria("cure") { *this = rhs; }

Ice::~Ice(void) {}

Ice			&Ice::operator=(Ice const &rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	return(new Ice);
}

void		Ice::use(ICharacter	&target)
{
	this->addXP();
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}