/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:23:29 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/16 22:46:48 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {} 

PlasmaRifle::PlasmaRifle(PlasmaRifle const &rhs) : AWeapon(rhs) {}

PlasmaRifle::~PlasmaRifle(void) {}

PlasmaRifle		&PlasmaRifle::operator=(PlasmaRifle const &rhs)
{
	AWeapon::operator=(rhs);
	return (*this);
}

void			PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
