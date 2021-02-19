/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 23:23:48 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/18 14:29:36 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"
# include <iostream>
# include <string>

class TacticalMarine : public ISpaceMarine
{
	public :

		TacticalMarine(void);
		TacticalMarine(TacticalMarine const &rhs);
		virtual ~TacticalMarine(void);
		TacticalMarine			&operator=(TacticalMarine const &rhs);
		virtual TacticalMarine*	clone(void) const;
		virtual void			battleCry(void) const;
		virtual void			rangedAttack(void) const;
		virtual void			meleeAttack(void) const;
};

#endif