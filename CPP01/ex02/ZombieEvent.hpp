/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 16:48:32 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/09 11:44:58 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <ctime>
# include <cstdlib>

class	ZombieEvent
{
	public:

		ZombieEvent(void);
		~ZombieEvent(void);
		void		setZombieType(std::string type);
		Zombie 		*newZombie (std::string name);
		Zombie		*randomChump(void);

	private:
		std::string	_zombietype;
};

#endif