/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:29:06 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/15 11:30:37 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : _name("No Name")
{
	std::cout << "\e[1mScavTrap Default Constructor Call :\e[0m \"Look out everybody! Things are about to get awesome!\"" << std::endl;
	this->setDefault();
}

ScavTrap::ScavTrap(std::string name) : _name(name)
{
	std::cout << "\e[1mScavTrap Name Constructor Call :\e[0m \"Look out everybody! Things are about to get awesome!\"" << std::endl;
	this->setDefault();
}

ScavTrap::ScavTrap(ScavTrap const &rhs)
{
	std::cout << "\e[1mScavTrap Copy Constructor Call :\e[0m \"Recompiling my combat code!\"" << std::endl;
	*this = rhs;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\e[1mScavTrap Destructor Call :\e[0m \"Meat confetti!\"" << std::endl << std::endl;
}

ScavTrap 	&ScavTrap::operator=(ScavTrap const &rhs)
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

void		ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at range, causing ";
	std::cout << this->_rangedAttackDamage <<" points of damage!" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at melee, causing ";
	std::cout << this->_meleeAttackDamage <<" points of damage!" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	int		realDamage = (int)amount > this->_armorDamageReduction ? amount - this->_armorDamageReduction : 0;

	this->setHitPoints(this->_hitPoints - realDamage);
	std::cout << "SC4V-TP " << this->_name << " received " << realDamage << " points of damage in stead of ";
	std::cout << amount <<" thanks to his " << this->_armorDamageReduction << " point damage reduction!" << std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	this->setHitPoints(this->_hitPoints + amount);
	std::cout << "SC4V-TP " << this->_name << " was healed of " << amount << " hit points!" << std::endl;
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

void		ScavTrap::printAll(void)
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

void		ScavTrap::setDefault(void)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
}

void		ScavTrap::setName(std::string name)
{
	this->_name = name;
}
void		ScavTrap::setHitPoints(int hitPoints)
{
	if (hitPoints < 0)
		this->_hitPoints = 0;
	else if (hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints = hitPoints;
}

void		ScavTrap::setMaxHitPoints(int maxHitPoints)
{
	this->_maxHitPoints = maxHitPoints;
}

void		ScavTrap::setEnergyPoints(int energyPoints)
{
	if (energyPoints < 0)
		this->_energyPoints = 0;
	else if (energyPoints > this->_maxEnergyPoints)
		this->_energyPoints = this->_maxEnergyPoints;
	else
		this->_energyPoints = energyPoints;
}

void		ScavTrap::setMaxEnergyPoints(int maxEnergyPoints)
{
	this->_maxEnergyPoints = maxEnergyPoints;
}

void		ScavTrap::setLevel(int level)
{
	this->_level = level;
}

void		ScavTrap::setMeleeAttackDamage(int meleeAttackDamage)
{
	this->_meleeAttackDamage = meleeAttackDamage;
}

void		ScavTrap::setRangedAttackDamage(int rangedAttackDamage)
{
	this->_rangedAttackDamage = rangedAttackDamage;
}

void		ScavTrap::setArmorDamageReduction(int armorDamageReduction)
{
	this->_armorDamageReduction = armorDamageReduction;
}

std::string	ScavTrap::getName(void) const {return this->_name;}
int			ScavTrap::getHitPoints(void) const {return this->_hitPoints;}
int			ScavTrap::getMaxHitPoints(void) const {return this->_maxHitPoints;}
int			ScavTrap::getEnergyPoints(void) const {return this->_energyPoints;}
int			ScavTrap::getMaxEnergyPoints(void) const {return this->_maxEnergyPoints;}
int			ScavTrap::getLevel(void) const {return this->_level;}
int			ScavTrap::getMeleeAttackDamage(void) const {return this->_meleeAttackDamage;}
int			ScavTrap::getRangedAttackDamage(void) const {return this->_rangedAttackDamage;}
int			ScavTrap::getArmorDamageReduction(void) const {return this->_armorDamageReduction;}
