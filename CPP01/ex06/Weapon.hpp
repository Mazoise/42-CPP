/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:30:34 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/09 16:53:15 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
	public:

		Weapon(std::string type);
		Weapon(void);
		~Weapon(void);
		const std::string	&getType(void) const;
		void				setType(std::string type);

	private:

		std::string			_type;

};

#endif