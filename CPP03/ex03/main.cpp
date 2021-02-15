/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:18:53 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/15 13:10:03 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

void	fragTrapTest(FragTrap &swagTrap)
{
	swagTrap.printAll();
	swagTrap.rangedAttack("Spitter Skag");
	swagTrap.takeDamage(47);
	std::cout << "HP : " << swagTrap.getHitPoints() << std::endl;
	swagTrap.meleeAttack("Larva Crab Worm");
	swagTrap.takeDamage(3);
	std::cout << "HP : " << swagTrap.getHitPoints() << std::endl;
	swagTrap.beRepaired(65);
	std::cout << "HP : " << swagTrap.getHitPoints() << std::endl;
	swagTrap.vaulthunter_dot_exe("Badass Guardian");
	std::cout << "EP : " << swagTrap.getEnergyPoints() << std::endl;
	swagTrap.vaulthunter_dot_exe("Meat Popsicle");
	std::cout << "EP : " << swagTrap.getEnergyPoints() << std::endl;
	swagTrap.vaulthunter_dot_exe("Giant Scythid");
	std::cout << "EP : " << swagTrap.getEnergyPoints() << std::endl;
	swagTrap.vaulthunter_dot_exe("Spiderant Queen");
	std::cout << "EP : " << swagTrap.getEnergyPoints() << std::endl;
	swagTrap.vaulthunter_dot_exe("Trash Feeder");
}

void	scavTrapTest(ScavTrap	&twerkTrap)
{
		twerkTrap.printAll();
	twerkTrap.rangedAttack("Spitter Skag");
	twerkTrap.takeDamage(142);
	std::cout << "HP : " << twerkTrap.getHitPoints() << std::endl;
	twerkTrap.beRepaired(13);
	std::cout << "HP : " << twerkTrap.getHitPoints() << std::endl;
	twerkTrap.meleeAttack("Larva Crab Worm");
	twerkTrap.takeDamage(3);
	std::cout << "HP : " << twerkTrap.getHitPoints() << std::endl;
	twerkTrap.challengeNewcomer();
	twerkTrap.challengeNewcomer();
	twerkTrap.challengeNewcomer();
}

void	ninjaTrapTest(FragTrap	&swagTrap, ScavTrap	&twerkTrap, NinjaTrap &sasukeTrap, ClapTrap &clappyTrap)
{
	NinjaTrap	narutoTrap("Naruto-Trap");

	narutoTrap.printAll();
	narutoTrap.rangedAttack("Spitter Skag");
	narutoTrap.takeDamage(50);
	std::cout << "HP : " << narutoTrap.getHitPoints() << std::endl;
	narutoTrap.meleeAttack("Larva Crab Worm");
	narutoTrap.takeDamage(3);
	std::cout << "HP : " << narutoTrap.getHitPoints() << std::endl;
	narutoTrap.beRepaired(12);
	std::cout << "HP : " << narutoTrap.getHitPoints() << std::endl;
	narutoTrap.ninjaShoebox(clappyTrap);
	narutoTrap.ninjaShoebox(swagTrap);
	narutoTrap.ninjaShoebox(twerkTrap);
	narutoTrap.ninjaShoebox(narutoTrap);
	narutoTrap.ninjaShoebox(sasukeTrap);
}

int		main()
{
	ClapTrap	clappyTrap("Clappy-Trap");
	FragTrap	swagTrap("Swag-Trap");
	ScavTrap	twerkTrap("Twerk-Trap");
	NinjaTrap	sasukeTrap("Sasuke-Trap");

	std::srand(std::time(0));
	// fragTrapTest(swagTrap);
	// scavTrapTest(twerkTrap);
	ninjaTrapTest(swagTrap, twerkTrap, sasukeTrap, clappyTrap);
}
