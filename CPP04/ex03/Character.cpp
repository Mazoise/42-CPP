/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 19:14:48 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/18 22:40:31 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_slots[i] = 0;
}

Character::Character(Character const &rhs) : _name(rhs.getName()) { *this = rhs; }

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_slots[i])
			delete this->_slots[i];
}

Character			&Character::operator=(Character const &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_slots[i])
			delete this->_slots[i];
		this->_slots[i] = rhs.getSlots(i)->clone();
	}
	return (*this);
}

std::string const	&Character::getName() const { return (this->_name); }

AMateria			*Character::getSlots(int idx) const
{
	if (idx >= 0 && idx < 4)
		return (this->_slots[idx]);
	return (0);
}

void				Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
		if (this->_slots[i] == m)
			return ;
	for (int i = 0; i < 4; i++)
		if (this->_slots[i] == 0)
		{
			this->_slots[i] = m;
			return ;
		}
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_slots[idx] = 0;
}

void				Character::use(int idx, ICharacter	&target)
{
	if (idx >= 0 && idx < 4 && this->_slots[idx])
		this->_slots[idx]->use(target);
}
