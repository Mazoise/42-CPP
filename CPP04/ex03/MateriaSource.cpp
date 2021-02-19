/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:10:17 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/18 21:59:54 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_slots[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const &rhs) { *this = rhs; }

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_slots[i])
			delete this->_slots[i];
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	for (int i = 0; i < 4; i++)
		if (this->_slots[i])
		{
			delete this->_slots[i];
			this->_slots[i] = rhs.getSlots(i)->clone();
		}
	return (*this);
}

AMateria		*MateriaSource::getSlots(int idx) const
{
	if (idx >= 0 && idx < 4)
		return (this->_slots[idx]);
	return (0);
}

void			MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
		if (this->_slots[i] == 0)
		{
			this->_slots[i] = m;
			return ;
		}
}

AMateria*		MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (this->_slots[i] && this->_slots[i]->getType() == type)
			return (this->_slots[i]->clone());
	return (0);
}
