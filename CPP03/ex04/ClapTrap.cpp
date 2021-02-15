/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 22:23:17 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/15 12:56:09 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "\e[1mClapTrap Default Constructor Call :\e[0m \"Building ClapTrap skeleton...\"" << std::endl;
	this->_name = "No Name";
	setDefault();
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "\e[1mClapTrap Name Constructor Call :\e[0m \"Building ClapTrap skeleton...\"" << std::endl;
	setDefault();
}

ClapTrap::ClapTrap(std::string name, std::string type, int hitPoints,
int maxHitPoints, int energyPoints, int maxEnergyPoints, int level,
int meleeAttackDamage, int rangedAttackDamage, int armorDamageReduction): 
_name(name),
_type(type),
_hitPoints(hitPoints),
_maxHitPoints(maxHitPoints),
_energyPoints(energyPoints),
_maxEnergyPoints(maxEnergyPoints),
_level(level),
_meleeAttackDamage(meleeAttackDamage),
_rangedAttackDamage(rangedAttackDamage),
_armorDamageReduction(armorDamageReduction)
{
	std::cout << "\e[1mClapTrap Full Constructor Call :\e[0m \"Building ClapTrap skeleton...\"" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
	std::cout << "\e[1mClapTrap Copy Constructor Call :\e[0m \"Building ClapTrap skeleton...\"" << std::endl;
	*this = rhs;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "\e[1mClapTrap Destructor Call :\e[0m \e[0mDestroying ClapTrap skeleton..." << std::endl << std::endl;
}

ClapTrap 	&ClapTrap::operator=(ClapTrap const &rhs)
{ 
	this->_name = rhs.getName();
	this->_type = rhs.getType();
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

void		ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << this->_type << " " << this->_name << " attacks " << target << " at range, causing ";
	std::cout << this->_rangedAttackDamage <<" points of damage!" << std::endl;
}

void		ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << this->_type << " " << this->_name << " attacks " << target << " at melee, causing ";
	std::cout << this->_meleeAttackDamage <<" points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	int		realDamage = (int)amount > this->_armorDamageReduction ? amount - this->_armorDamageReduction : 0;

	this->setHitPoints(this->_hitPoints - realDamage);
	std::cout << this->_type << " " << this->_name << " received " << realDamage << " points of damage in stead of ";
	std::cout << amount <<" thanks to his " << this->_armorDamageReduction << " point damage reduction!" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	this->setHitPoints(this->_hitPoints + amount);
	std::cout << this->_type << " " << this->_name << " was healed of " << amount << " hit points!" << std::endl;
}

void		ClapTrap::printAll(void)
{
	std::cout << std::endl << "Name                   : " << this->_name << std::endl;
	std::cout << "Type                   : " << this->_type << std::endl;
	std::cout << "Hit Points             : " << this->_hitPoints << std::endl;
	std::cout << "Max Hit Points         : " << this->_maxHitPoints << std::endl;
	std::cout << "Energy Points          : " << this->_energyPoints << std::endl;
	std::cout << "Max Energy Points      : " << this->_maxEnergyPoints << std::endl;
	std::cout << "Level                  : " << this->_level << std::endl;
	std::cout << "Melee Attack Damage    : " << this->_meleeAttackDamage << std::endl;
	std::cout << "Ranged Attack Damage   : " << this->_rangedAttackDamage << std::endl;
	std::cout << "Armor Damage Reduction : " << this->_armorDamageReduction << std::endl << std::endl;
}

void		ClapTrap::setDefault(void)
{
		this->_type = "CL4P-TP";
		this->_hitPoints = 100;
		this->_maxHitPoints = 100;
		this->_energyPoints = 100;
		this->_maxEnergyPoints = 100;
		this->_level = 1;
		this->_meleeAttackDamage = 30;
		this->_rangedAttackDamage = 20;
		this->_armorDamageReduction = 5;
}

void		ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void		ClapTrap::setType(std::string type)
{
	this->_type = type;
}

void		ClapTrap::setHitPoints(int hitPoints)
{
	if (hitPoints < 0)
		this->_hitPoints = 0;
	else if (hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints = hitPoints;
}

void		ClapTrap::setMaxHitPoints(int maxHitPoints)
{
	this->_maxHitPoints = maxHitPoints;
}

void		ClapTrap::setEnergyPoints(int energyPoints)
{
	if (energyPoints < 0)
		this->_energyPoints = 0;
	else if (energyPoints > this->_maxEnergyPoints)
		this->_energyPoints = this->_maxEnergyPoints;
	else
		this->_energyPoints = energyPoints;
}

void		ClapTrap::setMaxEnergyPoints(int maxEnergyPoints)
{
	this->_maxEnergyPoints = maxEnergyPoints;
}

void		ClapTrap::setLevel(int level)
{
	this->_level = level;
}

void		ClapTrap::setMeleeAttackDamage(int meleeAttackDamage)
{
	this->_meleeAttackDamage = meleeAttackDamage;
}

void		ClapTrap::setRangedAttackDamage(int rangedAttackDamage)
{
	this->_rangedAttackDamage = rangedAttackDamage;
}

void		ClapTrap::setArmorDamageReduction(int armorDamageReduction)
{
	this->_armorDamageReduction = armorDamageReduction;
}

std::string	ClapTrap::getName(void) const {return this->_name;}
std::string	ClapTrap::getType(void) const {return this->_type;}
int			ClapTrap::getHitPoints(void) const {return this->_hitPoints;}
int			ClapTrap::getMaxHitPoints(void) const {return this->_maxHitPoints;}
int			ClapTrap::getEnergyPoints(void) const {return this->_energyPoints;}
int			ClapTrap::getMaxEnergyPoints(void) const {return this->_maxEnergyPoints;}
int			ClapTrap::getLevel(void) const {return this->_level;}
int			ClapTrap::getMeleeAttackDamage(void) const {return this->_meleeAttackDamage;}
int			ClapTrap::getRangedAttackDamage(void) const {return this->_rangedAttackDamage;}
int			ClapTrap::getArmorDamageReduction(void) const {return this->_armorDamageReduction;}
