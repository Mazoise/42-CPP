/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:21:56 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/17 18:37:56 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int APCost, int damage) : _name(name), _APCost(APCost), _damage(damage) {}

AWeapon::AWeapon(AWeapon const &rhs) : _name(rhs.getName())
{
	*this = rhs;
}

AWeapon::~AWeapon(void){}

AWeapon 	&AWeapon::operator=(AWeapon const &rhs)
{
	this->_damage = rhs.getDamage();
	this->_APCost = rhs.getAPCost();
	return (*this);
}

void				AWeapon::setAPCost(int APCost) { this->_APCost = APCost; }
void				AWeapon::setDamage(int damage) { this->_damage = damage; }

std::string const 	&AWeapon::getName(void) const { return this->_name; }
int					AWeapon::getAPCost(void) const { return this->_APCost; }
int					AWeapon::getDamage(void) const { return this->_damage; }
