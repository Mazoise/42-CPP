/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 16:48:23 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/09 12:48:52 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieHorde.hpp"

void	stackzombie(void)
{
	Zombie		babyzombie("Lucy", "baby");
}

void	zombiehordecall(int N)
{
		ZombieHorde	zombiehorde(N);
}

int		main()
{
	std::srand(std::time(0));
	std::cout << "Zombie on the stack : announce()" << std::endl << std::endl;
	stackzombie();
	std::cout << "Zombie horde : 2 zombies" << std::endl << std::endl;
	zombiehordecall(2);
	std::cout << "Zombie horde : 5 zombies" << std::endl << std::endl;
	zombiehordecall(5);
}
