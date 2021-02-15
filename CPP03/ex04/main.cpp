/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:18:53 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/15 13:22:56 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

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

void	ninjaTrapTest(FragTrap	&swagTrap, ScavTrap	&twerkTrap)
{
	NinjaTrap	narutoTrap("Naruto-Trap");

	narutoTrap.printAll();
	narutoTrap.rangedAttack("Spitter Skag");
	narutoTrap.takeDamage(47);
	std::cout << "HP : " << narutoTrap.getHitPoints() << std::endl;
	narutoTrap.meleeAttack("Larva Crab Worm");
	narutoTrap.takeDamage(3);
	std::cout << "HP : " << narutoTrap.getHitPoints() << std::endl;
	narutoTrap.beRepaired(65);
	std::cout << "HP : " << narutoTrap.getHitPoints() << std::endl;
	narutoTrap.ninjaShoebox(narutoTrap);
	narutoTrap.ninjaShoebox(swagTrap);
	narutoTrap.ninjaShoebox(twerkTrap);
}

void	superTrapTest(SuperTrap	&geniusTrap, FragTrap &swagTrap)
{
	geniusTrap.printAll();
	geniusTrap.rangedAttack("Spitter Skag");
	geniusTrap.takeDamage(47);
	std::cout << "HP : " << geniusTrap.getHitPoints() << std::endl;
	geniusTrap.meleeAttack("Larva Crab Worm");
	geniusTrap.takeDamage(3);
	std::cout << "HP : " << geniusTrap.getHitPoints() << std::endl;
	geniusTrap.beRepaired(65);
	std::cout << "HP : " << geniusTrap.getHitPoints() << std::endl;
	geniusTrap.ninjaShoebox(swagTrap);
	geniusTrap.vaulthunter_dot_exe("Trash Feeder");
}

int		main()
{
	FragTrap	swagTrap("Swag-Trap");
	// ScavTrap	twerkTrap("Twerk-Trap");

	// std::srand(std::time(0));
	// fragTrapTest(swagTrap);
	// scavTrapTest(twerkTrap);
	// ninjaTrapTest(swagTrap, twerkTrap);
	SuperTrap geniusTrap("Genius-Trap");

	superTrapTest(geniusTrap, swagTrap);
}
