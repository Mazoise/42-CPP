/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 23:23:43 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/18 16:18:25 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"
# include <iostream>
# include <string>

class	SquadUnit
{
	public :

		SquadUnit(void);
		SquadUnit(SquadUnit const &rhs);
		SquadUnit(ISpaceMarine *unit);
		virtual ~SquadUnit(void);
		SquadUnit 			&operator=(SquadUnit const &rhs);
		ISpaceMarine		&getUnit(void);
		SquadUnit			*getNext(void);
		void				setNext(SquadUnit *next);

	private :

		ISpaceMarine	*_unit;
		SquadUnit		*_next;
};

class	Squad : public ISquad
{
	public:
		Squad(void);
		Squad(Squad const &rhs);
		virtual ~Squad(void);
		Squad 					&operator=(Squad const &rhs);
		virtual int				getCount(void) const;
		virtual ISpaceMarine	*getUnit(int N) const;
		SquadUnit				*getUnits(void) const;
		virtual int				push(ISpaceMarine *unit);

	private:

		int				_count;
		SquadUnit		*_units;
};

#endif