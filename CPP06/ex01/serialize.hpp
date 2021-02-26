/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 11:28:38 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/26 15:20:20 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <string>
# include <iostream>
# include <ctime>
# include <cstdlib>

struct Data
{
	std::string		s1;
	int				n;
	std::string		s2;
};

#endif