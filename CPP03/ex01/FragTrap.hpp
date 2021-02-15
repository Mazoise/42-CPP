/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:29:11 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/12 19:02:27 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>

class FragTrap
{
	public:

		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		~FragTrap(void);
		FragTrap	&operator=(FragTrap const &rhs);

		void		rangedAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		vaulthunter_dot_exe(std::string const &target);
		void		printAll(void);
		void		setDefault(void);

		std::string	getName(void) const;
		int			getHitPoints(void) const;
		int			getMaxHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int			getMaxEnergyPoints(void) const;
		int			getLevel(void) const;
		int			getMeleeAttackDamage(void) const;
		int			getRangedAttackDamage(void) const;
		int			getArmorDamageReduction(void) const;
	
		void		setName(std::string name);
		void		setHitPoints(int hitPoints);
		void		setMaxHitPoints(int maxHitPoints);
		void		setEnergyPoints(int energyPoints);
		void		setMaxEnergyPoints(int maxEnergyPoints);
		void		setLevel(int level);
		void		setMeleeAttackDamage(int meleeAttackDamage);
		void		setRangedAttackDamage(int rangedAttackDamage);
		void		setArmorDamageReduction(int armorDamageReduction);

	private:

		std::string	_name;
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
