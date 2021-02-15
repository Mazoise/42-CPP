/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 16:48:35 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/09 11:31:05 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	this->_zombietype = "";
}

ZombieEvent::~ZombieEvent(void)
{}

void		ZombieEvent::setZombieType(std::string type)
{
	this->_zombietype = type;
}

Zombie 		*ZombieEvent::newZombie (std::string name)
{
	return(new Zombie(name, this->_zombietype));
}

Zombie 		*ZombieEvent::randomChump(void)
{
	const	std::string	names[] = {"Charlie", "Zoey", "Francis", "Joanne", "Kevin", "Lina", "Martin", "Chucky"};

	return (this->newZombie(names[std::rand() % 8]));
}
