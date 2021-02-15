/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 16:48:35 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/09 12:49:12 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	this->_zombietype = "random";
	this->_N = N;
	this->_zombiehorde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		this->_zombiehorde[i].setname(this->randomChump());
		this->_zombiehorde[i].settype(this->_zombietype);
	}
	this->announce();
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] this->_zombiehorde;
}

void		ZombieHorde::announce(void) const
{
	for (int i = 0; i < this->_N; i++)
		this->_zombiehorde[i].announce();
}

Zombie 		*ZombieHorde::newZombie(std::string name)
{
	return(new Zombie(name, this->_zombietype));
}

std::string	ZombieHorde::randomChump(void)
{
	const	std::string	names[] = {"Charlie", "Zoey", "Francis", "Joanne", "Kevin", "Lina", "Martin", "Chucky"};

	return (names[std::rand() % 8]);
}
