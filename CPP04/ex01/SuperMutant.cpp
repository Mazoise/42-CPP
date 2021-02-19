/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:23:29 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/17 17:21:13 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
} 

SuperMutant::SuperMutant(SuperMutant const &rhs) : Enemy(rhs)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(void) 
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant		&SuperMutant::operator=(SuperMutant const &rhs)
{
	Enemy::operator=(rhs);
	return (*this);
}

void			SuperMutant::takeDamage(int damage)
{
	this->setHP(this->_HP - damage + 3);
}
