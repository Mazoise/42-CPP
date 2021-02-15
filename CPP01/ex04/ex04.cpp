/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 13:10:23 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/09 13:26:42 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*brain_pointer = &brain;
	std::string &brain_reference = brain;

	std::cout << "Pointer   : " << *brain_pointer << std::endl;
	std::cout << "Reference : " << brain_reference << std::endl;
}
