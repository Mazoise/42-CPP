/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:10:23 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/18 22:11:21 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public :

		MateriaSource(void);
		MateriaSource(std::string const &name);
		MateriaSource(MateriaSource const &rhs);
		virtual ~MateriaSource(void);
		MateriaSource		&operator=(MateriaSource const &rhs);

		virtual void		learnMateria(AMateria *m);
		virtual AMateria*	createMateria(std::string const &type);
		AMateria			*getSlots(int idx) const;

	private :
		AMateria			*_slots[4];
};

#endif