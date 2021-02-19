/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:30:16 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/18 18:43:54 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(Cure const &rhs) : AMateria("cure") { *this = rhs; }

Cure::~Cure(void) {}

Cure			&Cure::operator=(Cure const &rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	return(new Cure);
}

void		Cure::use(ICharacter	&target)
{
	this->addXP();
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
