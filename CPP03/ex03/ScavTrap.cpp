/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:29:06 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/15 10:46:32 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("No Name", "SC4V-TP", 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "\e[1mScavTrap Default Constructor Call :\e[0m \"Look out everybody! Things are about to get awesome!\"" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, "SC4V-TP", 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "\e[1mScavTrap Name Constructor Call :\e[0m \"Look out everybody! Things are about to get awesome!\"" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs) : ClapTrap(rhs)
{
	std::cout << "\e[1mScavTrap Copy Constructor Call :\e[0m \"Recompiling my combat code!\"" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\e[1mScavTrap Destructor Call :\e[0m \"Meat confetti!\"" << std::endl << std::endl;
}

ScavTrap 	&ScavTrap::operator=(ScavTrap const &rhs)
{ 
	ClapTrap::operator=(rhs);
	return *this;
}

void		ScavTrap::challengeNewcomer(void)
{
	std::string challenge[] =  {"Find the corpses of old CL4P-TP",
								"Fight the queen tarentulla and bring back her eyes",
								"Bring back Dr.Ned from zombie island",
								"Give this love letter to VR-0N1CA"};

	std::cout << this->_name << " challenges new comer : \"Care to have a friendly duel?\"" << std::endl;
	std::cout << "    - " << challenge[std::rand() % 4] << std::endl;
}
