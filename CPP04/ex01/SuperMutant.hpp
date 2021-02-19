/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:23:55 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/16 20:21:10 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:

		SuperMutant(void);
		SuperMutant(SuperMutant const &rhs);
		virtual ~SuperMutant(void);

		SuperMutant 	&operator=(SuperMutant const &rhs);

		virtual void	takeDamage(int damage);
};

#endif

