/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 19:15:20 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/18 20:47:54 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public :

		Character(void);
		Character(std::string const &name);
		Character(Character const &rhs);
		virtual ~Character(void);
		Character					&operator=(Character const &rhs);
		virtual std::string const	&getName() const;
		AMateria					*getSlots(int idx) const;
		virtual void				equip(AMateria *m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter &target);

	private :

		std::string const			_name;
		AMateria					*_slots[4];
};

#endif