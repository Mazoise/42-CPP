/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:22:05 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/17 18:35:43 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _AP(40), _weapon(0) {}

Character::Character(Character const &rhs) : _name(rhs.getName())
{
	*this = rhs;
}

Character::~Character(void)
{}

Character 			&Character::operator=(Character const &rhs)
{
	this->_weapon = rhs.getWeapon();
	this->_AP = rhs.getAP();
	return (*this);
}

void				Character::recoverAP(void)
{
	if (this->_AP <= 30)
		this->_AP += 10;
	else
		this->_AP = 40;
}

void				Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void				Character::attack(Enemy *enemy)
{
	if (this->_weapon == 0 || this->_AP < this->_weapon->getAPCost())
		return ;
	std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	enemy->takeDamage(this->_weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
	this->_AP -= this->_weapon->getAPCost();
}

void				Character::setAP(int AP) { this->_AP = AP; }
void				Character::setWeapon(AWeapon *weapon) { this->_weapon = weapon; }

std::string	const	&Character::getName(void) const { return (this->_name); }
int					Character::getAP(void) const { return (this->_AP); }
AWeapon				*Character::getWeapon(void) const { return (this->_weapon); }

std::ostream		&operator<<(std::ostream &o, Character const &rhs)
{
	if (rhs.getWeapon())
		o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
	else
		o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
	return (o);
}
