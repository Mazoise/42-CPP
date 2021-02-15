/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:29:11 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/12 23:13:48 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:

		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const &src);
		~NinjaTrap(void);
		NinjaTrap	&operator=(NinjaTrap const &rhs);

		void		ninjaShoebox(NinjaTrap &ninja);
		void		ninjaShoebox(FragTrap &frag);
		void		ninjaShoebox(ScavTrap &scav);
		void		ninjaShoebox(ClapTrap &clap);
};

#endif
