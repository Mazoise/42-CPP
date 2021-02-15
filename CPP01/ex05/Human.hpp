/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 13:50:35 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/09 15:01:48 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class	Human
{
	public:
		Human(void);
		~Human(void);
		std::string		identify(void) const;
		const Brain		&getBrain(void) const;
	private:
		const Brain	_brain;
};

#endif
