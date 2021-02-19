/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:17:44 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/19 10:52:26 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Chicken.hpp"

void	asked_output()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
}

void	more_tests()
{
	std::cout << std::endl;
	Sorcerer georges("Georges", "the Great");
	Victim *rocky = new Chicken("Rocky");
	std::cout << georges << *rocky;
	georges.polymorph(*rocky);
	delete rocky;

}

int		main()
{
	asked_output();
	more_tests();
}
