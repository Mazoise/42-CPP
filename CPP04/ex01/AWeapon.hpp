/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:22:01 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/17 18:37:29 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
	public:

		AWeapon(void);
		AWeapon(std::string const &name, int APCost, int damage);
		AWeapon(AWeapon const &rhs);
		virtual ~AWeapon(void);
		AWeapon 			&operator=(AWeapon const &rhs);

		virtual void		attack() const = 0;

		std::string const	&getName(void) const;
		int					getAPCost(void) const;
		int					getDamage(void) const;

		void				setAPCost(int APCost);
		void				setDamage(int damage);

	protected:

		std::string	const	_name;
		int					_APCost;
		int					_damage;
};

#endif
