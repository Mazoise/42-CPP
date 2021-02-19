/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:22:12 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/17 18:57:55 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int HP, std::string const &type) : _HP(HP), _type(type) {}

Enemy::Enemy(Enemy const &rhs) : _type(rhs.getType()) { *this = rhs; }

Enemy::~Enemy(void){}

Enemy 				&Enemy::operator=(Enemy const &rhs)
{
	this->_HP = rhs.getHP();
	return (*this);
}

void				Enemy::takeDamage(int damage)
{
	this->setHP(this->_HP - damage);
}

void				Enemy::setHP(int HP)
{
	if (HP <= 0)
		this->_HP = 0;
	else
		this->_HP = HP;
}

std::string	const	&Enemy::getType(void) const { return this->_type; }
int					Enemy::getHP(void) const { return this->_HP; }
