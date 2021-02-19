/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:22:16 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/17 18:41:25 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	public:

		Enemy(void);
		Enemy(int HP, std::string const &type);
		Enemy(Enemy const &rhs);
		virtual ~Enemy(void);
		Enemy 				&operator=(Enemy const &rhs);

		virtual void		takeDamage(int damage);

		std::string const	&getType(void) const;
		int					getHP(void) const;

		void				setHP(int HP);

	protected:

		int					_HP;
		std::string const	_type;
};

#endif
