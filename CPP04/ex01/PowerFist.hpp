/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:23:55 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/16 20:08:43 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:

		PowerFist(void);
		PowerFist(PowerFist const &rhs);
		virtual ~PowerFist(void);

		PowerFist 		&operator=(PowerFist const &rhs);

		void			attack(void) const;
};

#endif

