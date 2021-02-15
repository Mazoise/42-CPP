/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:48:25 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/13 16:19:08 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include <ctime>
# include <cstdlib>

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:

		SuperTrap(void);
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const &src);
		~SuperTrap(void);
		SuperTrap	&operator=(SuperTrap const &rhs);
		void		rangedAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
};

#endif
