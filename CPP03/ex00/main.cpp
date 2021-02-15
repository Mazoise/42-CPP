/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:18:53 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/15 12:02:33 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	fragTrapTest()
{
	FragTrap	swagTrap("Swag-Trap");
	swagTrap.printAll();
	FragTrap	swagCopyTrap(swagTrap);
	swagCopyTrap.printAll();

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

int		main()
{
	std::srand(std::time(0));
	fragTrapTest();
}
