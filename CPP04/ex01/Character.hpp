/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:22:09 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/17 18:36:58 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER
# define CHARACTER

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	public:

		Character(void);
		Character(std::string const &name);
		Character(Character const &rhs);
		~Character(void);
		Character			&operator=(Character const &rhs);

		void				recoverAP(void);
		void				equip(AWeapon *weapon);
		void				attack(Enemy *enemy);

		std::string	const	&getName(void) const;
		int			 		getAP(void) const;
		AWeapon			 		*getWeapon(void) const;

		void				setAP(int AP);
		void				setWeapon(AWeapon *weapon);

	private:

		std::string	const	_name;
		int					_AP;
		AWeapon				*_weapon;
};

std::ostream				&operator<<(std::ostream &o, Character const &rhs);

#endif
