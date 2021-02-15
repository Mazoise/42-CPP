/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:32:34 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/09 16:48:07 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::Weapon(void)
{}

Weapon::~Weapon(void)
{}

const std::string	&Weapon::getType(void) const
{
	return(this->_type);
}

void				Weapon::setType(std::string type)
{
	this->_type = type;
}
