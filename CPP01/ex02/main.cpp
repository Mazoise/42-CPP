/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 16:48:23 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/09 11:52:15 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieEvent.hpp"

void	stackzombie(void)
{
	Zombie		babyzombie("Lucy", "baby");
}

int		main()
{
	Zombie		*hipsterzombie;
	ZombieEvent	hipsterzombieevent;
	Zombie		*prozombie[3];
	ZombieEvent	prozombieevent;

	std::srand(std::time(0));
	std::cout << "Zombie on the stack : announce()" << std::endl << std::endl;
	stackzombie();
	std::cout << "Zombie on the heap : setZombieType() && newZombie()" << std::endl << std::endl;
	hipsterzombieevent.setZombieType("hipster");
	hipsterzombie = hipsterzombieevent.newZombie("Romy");
	delete hipsterzombie;
	std::cout << "3 zombies on the heap : randomChump()" << std::endl << std::endl;
	for (int i = 0; i < 3; i++)
	{
		prozombieevent.setZombieType("pro");
		prozombie[i] = prozombieevent.randomChump();
		delete prozombie[i];
	}
}
