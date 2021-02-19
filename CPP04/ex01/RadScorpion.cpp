/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:23:29 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/16 22:55:52 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "Rad Scorpion")
{
	std::cout << "* click click click *" << std::endl;
} 

RadScorpion::RadScorpion(RadScorpion const &rhs) : Enemy(rhs)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void) 
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion		&RadScorpion::operator=(RadScorpion const &rhs)
{
	Enemy::operator=(rhs);
	return (*this);
}
