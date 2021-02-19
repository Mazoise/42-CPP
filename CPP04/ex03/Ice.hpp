/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:59:29 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/18 18:02:37 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public :

		Ice(void);
		Ice(Ice const &rhs);
		virtual ~Ice(void);
		Ice					&operator=(Ice const &rhs);

		virtual AMateria	*clone(void) const;
		virtual void		use(ICharacter	&target);
};

#endif