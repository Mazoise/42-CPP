/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:23:55 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/16 20:08:17 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:

		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const &rhs);
		virtual ~PlasmaRifle(void);

		PlasmaRifle 	&operator=(PlasmaRifle const &rhs);

		void			attack(void) const;
};

#endif

