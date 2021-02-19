/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:59:29 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/18 18:02:37 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public :

		Cure(void);
		Cure(Cure const &rhs);
		virtual ~Cure(void);
		Cure				&operator=(Cure const &rhs);

		virtual AMateria	*clone(void) const;
		virtual void		use(ICharacter	&target);
};

#endif