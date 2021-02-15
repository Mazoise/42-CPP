/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 13:49:19 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/09 15:04:12 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{}

Brain::~Brain(void)
{}

std::string		Brain::identify(void) const
{
  std::stringstream ss;
  ss << this;
  return (ss.str());
}
