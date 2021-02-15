/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:48:10 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/15 15:09:01 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
	std::cout << "\e[1mSuperTrap Name Constructor Call :\e[0m \"Look out everybody! Things are about to get awesome!\"" << std::endl;
	FragTrap 	frag;
	NinjaTrap	ninja;

	this->_name = "No name";
	this->_type = "SUP3R-TP";
	this->_hitPoints = frag.getHitPoints();
	this->_maxHitPoints = frag.getMaxHitPoints();
	this->_energyPoints = ninja.getEnergyPoints();
	this->_maxEnergyPoints = ninja.getMaxEnergyPoints();
	this->_level = 1;
	this->_meleeAttackDamage = ninja.getMeleeAttackDamage();
	this->_rangedAttackDamage = frag.getRangedAttackDamage();
	this->_armorDamageReduction = frag.getArmorDamageReduction();
}

SuperTrap::SuperTrap(std::string name)
{
	std::cout << "\e[1mSuperTrap Name Constructor Call :\e[0m \"Look out everybody! Things are about to get awesome!\"" << std::endl;
	FragTrap 	frag;
	NinjaTrap	ninja;

	this->_name = name;
	this->_type = "SUP3R-TP";
	this->_hitPoints = frag.getHitPoints();
	this->_maxHitPoints = frag.getMaxHitPoints();
	this->_energyPoints = ninja.getEnergyPoints();
	this->_maxEnergyPoints = ninja.getMaxEnergyPoints();
	this->_level = 1;
	this->_meleeAttackDamage = ninja.getMeleeAttackDamage();
	this->_rangedAttackDamage = frag.getRangedAttackDamage();
	this->_armorDamageReduction = frag.getArmorDamageReduction();
}

SuperTrap::SuperTrap(SuperTrap const &rhs) : ClapTrap(rhs)
{
	std::cout << "\e[1mSuperTrap Copy Constructor Call :\e[0m \"Recompiling my combat code!\"" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "\e[1mSuperTrap Destructor Call :\e[0m \"Meat confetti!\"" << std::endl << std::endl;
}

SuperTrap 	&SuperTrap::operator=(SuperTrap const &rhs)
{ 
	ClapTrap::operator=(rhs);
	return *this;
}

void		SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void		SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}
