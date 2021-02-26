/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 13:09:18 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/25 20:57:40 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>
# include <cstring>
# include <iostream>
# include <limits>
# include <sstream>

bool					inputIsInt(const std::string str);
bool					inputIsChar(const std::string str);
bool					inputIsFloat(const std::string str);
bool					inputIsDouble(const std::string str);
void					outputFromInt(int int_value);
void					outputFromChar(char char_value);
void					outputFromFloat(float float_value);
void					outputFromDouble(double double_value);
std::string const		double_to_string(double double_value);
std::string const		float_to_string(float float_value);

#endif