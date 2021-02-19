/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chicken.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:48:28 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/16 12:03:40 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Chicken.hpp"

Chicken::Chicken(std::string name) : Victim(name)
{
	this->_name = name;
	std::cout << "Cot Cot." << std::endl;
}

Chicken::Chicken(Chicken const &rhs) : Victim(rhs)
{
	std::cout << "Cot Cot." << std::endl;
}

Chicken::~Chicken(void)
{
	std::cout << "Codeeek..." << std::endl;
}

Chicken	&Chicken::operator=(Chicken const &rhs)
{
	Victim::operator=(rhs);
	return (*this);
}

void	Chicken::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a fox!" << std::endl;
}
