/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 23:23:48 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/18 14:29:36 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"
# include <iostream>
# include <string>

class AssaultTerminator : public ISpaceMarine
{
	public :

		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const &rhs);
		virtual ~AssaultTerminator(void);
		AssaultTerminator			&operator=(AssaultTerminator const &rhs);
		virtual AssaultTerminator*	clone(void) const;
		virtual void			battleCry(void) const;
		virtual void			rangedAttack(void) const;
		virtual void			meleeAttack(void) const;
};

#endif