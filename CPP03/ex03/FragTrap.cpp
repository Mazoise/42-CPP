/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:29:06 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/15 10:45:33 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("No Name", "FR4G-TP", 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "\e[1mFragTrap Default Constructor Call :\e[0m \"Hey everybody! Check out my package!\"" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, "FR4G-TP", 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "\e[1mFragTrap Name Constructor Call :\e[0m \"Hey everybody! Check out my package!\"" << std::endl;
}

FragTrap::FragTrap(FragTrap const &rhs) : ClapTrap(rhs)
{
	std::cout << "\e[1mFragTrap Copy Constructor Call :\e[0m \"This time it'll be awesome, I promise!\"" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "\e[1mFragTrap Destructor Call :\e[0m \"Flesh fireworks!\"" << std::endl << std::endl;
}

FragTrap 	&FragTrap::operator=(FragTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	return *this;
}

void		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string attacks[] =    {"Torgue Fiesta : \"It's time for my free grenade giveaway!\"",
								"One Shot Wonder : \"All these bullets in just one shot.\"",
								"Laser Inferno : \"Boogie time!\"",
								"Gun Wizard : \"You can call me Gundalf!\"",
								"Rubber Ducky : \"I am rubber, and you are so dead!\""};

	if (this->_energyPoints >= 25)
	{
		std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with VaultHunter.EXE : " << std::endl;
		std::cout << "    - " << attacks[std::rand() % 5] << std::endl;
		this->setEnergyPoints(this->_energyPoints - 25);
	}
	else
		std::cout << "FR4G-TP " << this->_name << " doesn't have enough energy to launch VaultHunter.EXE attack." << std::endl;
}
