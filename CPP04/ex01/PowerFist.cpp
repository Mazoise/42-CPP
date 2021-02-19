/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:23:29 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/16 18:34:23 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) {} 

PowerFist::PowerFist(PowerFist const &rhs) : AWeapon(rhs) {}

PowerFist::~PowerFist(void) {}

PowerFist		&PowerFist::operator=(PowerFist const &rhs)
{
	AWeapon::operator=(rhs);
	return (*this);
}

void			PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
