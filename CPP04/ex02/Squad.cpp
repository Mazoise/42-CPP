/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 23:23:40 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/18 17:19:11 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : _count(0), _units(0) {}

Squad::Squad(Squad const &rhs) { *this = rhs; }

Squad::~Squad(void)
{
	SquadUnit	*cursor;

	while (this->_units)
	{
		cursor = this->_units->getNext();
		delete this->_units;
		this->_units = cursor;
	}
}

Squad			&Squad::operator=(Squad const &rhs)
{
	SquadUnit	*cursor;

	while (this->_units)
	{
		cursor = this->_units->getNext();
		delete this->_units;
		this->_units = cursor;
	}
	this->_count = 0;
	cursor = rhs.getUnits();
	for (int i = 0; i < rhs.getCount(); i++)
	{
		this->_count = push(cursor->getUnit().clone());
		cursor = cursor->getNext();
	}
	return (*this);
}

int				Squad::push(ISpaceMarine *unit)
{
	SquadUnit	*cursor = this->_units;

	if (!unit)
		return (this->_count);
	if (!cursor)
	{
		this->_units = new SquadUnit(unit);
		this->_count += 1;
		return (this->_count);
	}
	while (cursor->getNext())
	{
		if (&cursor->getUnit() == unit)
			return (this->_count);
		cursor = cursor->getNext();
	}
	cursor->setNext(new SquadUnit(unit));
	this->_count += 1;
	return (this->_count);
}

int				Squad::getCount(void) const { return (this->_count); }
SquadUnit		*Squad::getUnits(void) const { return (this->_units); }
ISpaceMarine	*Squad::getUnit(int N) const
{
	SquadUnit	*cursor = this->_units;

	for (int i = 0; i < N; i++)
		if (cursor->getNext())
			cursor = cursor->getNext();
		else
			return (0);
	return (&cursor->getUnit());
}

SquadUnit::SquadUnit(ISpaceMarine *unit) : _unit(unit), _next(0) {}
SquadUnit::~SquadUnit() { delete this->_unit; }

void				SquadUnit::setNext(SquadUnit *next) { this->_next = next; }

ISpaceMarine		&SquadUnit::getUnit(void) { return *this->_unit; }
SquadUnit			*SquadUnit::getNext(void) { return this->_next; }