/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 22:23:20 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/13 13:45:04 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(std::string name, std::string type, int hitPoints,
		int maxHitPoints, int energyPoints, int maxEnergyPoints, int level,
		int meleeAttackDamage, int rangedAttackDamage, int armorDamageReduction);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);
		ClapTrap	&operator=(ClapTrap const &rhs);

		void		rangedAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		setDefault(void);
		void		printAll(void);

		std::string	getName(void) const;
		std::string	getType(void) const;
		int			getHitPoints(void) const;
		int			getMaxHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int			getMaxEnergyPoints(void) const;
		int			getLevel(void) const;
		int			getMeleeAttackDamage(void) const;
		int			getRangedAttackDamage(void) const;
		int			getArmorDamageReduction(void) const;

		void		setName(std::string name);
		void		setType(std::string type);
		void		setHitPoints(int hitPoints);
		void		setMaxHitPoints(int maxHitPoints);
		void		setEnergyPoints(int energyPoints);
		void		setMaxEnergyPoints(int maxEnergyPoints);
		void		setLevel(int level);
		void		setMeleeAttackDamage(int meleeAttackDamage);
		void		setRangedAttackDamage(int rangedAttackDamage);
		void		setArmorDamageReduction(int armorDamageReduction);

	protected:

		std::string	_name;
		std::string	_type;
		int			_hitPoints;
		int			_maxHitPoints;
		int			_energyPoints;
		int			_maxEnergyPoints;
		int			_level;
		int			_meleeAttackDamage;
		int			_rangedAttackDamage;
		int			_armorDamageReduction;
};

#endif

