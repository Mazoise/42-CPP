/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 14:19:34 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/09 15:02:46 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Human.hpp"

Human::Human(void)
{}

Human::~Human(void)
{}

const Brain		&Human::getBrain(void) const
{
	return (this->_brain);
}

std::string		Human::identify(void) const
{
	return(this->_brain.identify());
}
