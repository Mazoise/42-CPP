/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:29:06 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/15 11:33:23 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _name("No Name")
{
	std::cout << "\e[1mFragTrap Default Constructor Call :\e[0m \"Hey everybody! Check out my package!\"" << std::endl;
	this->setDefault();
}

FragTrap::FragTrap(std::string name) : _name(name)
{
	std::cout << "\e[1mFragTrap Name Constructor Call :\e[0m \"Hey everybody! Check out my package!\"" << std::endl;
	this->setDefault();
}

FragTrap::FragTrap(FragTrap const &rhs)
{
	std::cout << "\e[1mFragTrap Copy Constructor Call :\e[0m \"This time it'll be awesome, I promise!\"" << std::endl;
	*this = rhs;
}

FragTrap::~FragTrap(void)
{
	std::cout << "\e[1mFragTrap Destructor Call :\e[0m \"Flesh fireworks!\"" << std::endl << std::endl;
}

FragTrap 	&FragTrap::operator=(FragTrap const &rhs)
{ 
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_maxHitPoints = rhs.getMaxHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
	this->_level = rhs.getLevel();
	this->_meleeAttackDamage = rhs.getMeleeAttackDamage();
	this->_rangedAttackDamage = rhs.getRangedAttackDamage();
	this->_armorDamageReduction = rhs.getArmorDamageReduction();
	return *this;
}

void		FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing ";
	std::cout << this->_rangedAttackDamage <<" points of damage!" << std::endl;
}

void		FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing ";
	std::cout << this->_meleeAttackDamage <<" points of damage!" << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount)
{
	int		realDamage = (int)amount > this->_armorDamageReduction ? amount - this->_armorDamageReduction : 0;

	this->setHitPoints(this->_hitPoints - realDamage);
	std::cout << "FR4G-TP " << this->_name << " received " << realDamage << " points of damage in stead of ";
	std::cout << amount <<" thanks to his " << this->_armorDamageReduction << " point damage reduction!" << std::endl;
}

void		FragTrap::beRepaired(unsigned int amount)
{
	this->setHitPoints(this->_hitPoints + amount);
	std::cout << "FR4G-TP " << this->_name << " was healed of " << amount << " hit points!" << std::endl;
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

void		FragTrap::printAll(void)
{
	std::cout << std::endl << "Name                   : " << this->_name << std::endl;
	std::cout << "Hit Points             : " << this->_hitPoints << std::endl;
	std::cout << "Max Hit Points         : " << this->_maxHitPoints << std::endl;
	std::cout << "Energy Points          : " << this->_energyPoints << std::endl;
	std::cout << "Max Energy Points      : " << this->_maxEnergyPoints << std::endl;
	std::cout << "Level                  : " << this->_level << std::endl;
	std::cout << "Melee Attack Damage    : " << this->_meleeAttackDamage << std::endl;
	std::cout << "Ranged Attack Damage   : " << this->_rangedAttackDamage << std::endl;
	std::cout << "Armor Damage Reduction : " << this->_armorDamageReduction << std::endl << std::endl;
}

void		FragTrap::setDefault(void)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
}

void		FragTrap::setName(std::string name)
{
	this->_name = name;
}

void		FragTrap::setHitPoints(int hitPoints)
{
	if (hitPoints < 0)
		this->_hitPoints = 0;
	else if (hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints = hitPoints;
}

void		FragTrap::setMaxHitPoints(int maxHitPoints)
{
	this->_maxHitPoints = maxHitPoints;
}

void		FragTrap::setEnergyPoints(int energyPoints)
{
	if (energyPoints < 0)
		this->_energyPoints = 0;
	else if (energyPoints > this->_maxEnergyPoints)
		this->_energyPoints = this->_maxEnergyPoints;
	else
		this->_energyPoints = energyPoints;
}

void		FragTrap::setMaxEnergyPoints(int maxEnergyPoints)
{
	this->_maxEnergyPoints = maxEnergyPoints;
}

void		FragTrap::setLevel(int level)
{
	this->_level = level;
}

void		FragTrap::setMeleeAttackDamage(int meleeAttackDamage)
{
	this->_meleeAttackDamage = meleeAttackDamage;
}

void		FragTrap::setRangedAttackDamage(int rangedAttackDamage)
{
	this->_rangedAttackDamage = rangedAttackDamage;
}

void		FragTrap::setArmorDamageReduction(int armorDamageReduction)
{
	this->_armorDamageReduction = armorDamageReduction;
}

std::string	FragTrap::getName(void) const {return this->_name;}
int			FragTrap::getHitPoints(void) const {return this->_hitPoints;}
int			FragTrap::getMaxHitPoints(void) const {return this->_maxHitPoints;}
int			FragTrap::getEnergyPoints(void) const {return this->_energyPoints;}
int			FragTrap::getMaxEnergyPoints(void) const {return this->_maxEnergyPoints;}
int			FragTrap::getLevel(void) const {return this->_level;}
int			FragTrap::getMeleeAttackDamage(void) const {return this->_meleeAttackDamage;}
int			FragTrap::getRangedAttackDamage(void) const {return this->_rangedAttackDamage;}
int			FragTrap::getArmorDamageReduction(void) const {return this->_armorDamageReduction;}
