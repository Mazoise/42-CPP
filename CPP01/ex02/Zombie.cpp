/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 16:48:26 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/09 12:23:54 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	std::cout << "Generating zombie..." << std::endl << std::endl;
	this->_name = name;
	this->_type = type;
	announce();
}

Zombie::Zombie(void)
{
	std::cout << "Generating zombie..." << std::endl << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Oh no ! " << this->_name << " fell off a cliff" << std::endl << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << "Hi ! I'm " << this->_name << ", a " << this->_type << " zombie." << std::endl << std::endl;
}
