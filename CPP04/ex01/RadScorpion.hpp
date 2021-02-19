/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:23:55 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/16 21:17:19 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:

		RadScorpion(void);
		RadScorpion(RadScorpion const &rhs);
		virtual ~RadScorpion(void);

		RadScorpion 	&operator=(RadScorpion const &rhs);
};

#endif

