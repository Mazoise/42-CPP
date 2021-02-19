/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 23:23:38 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/18 17:17:52 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

void	asked_output()
{
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new AssaultTerminator;
	ISquad *vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine *cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	std::cout << std::endl;
}

void	more_tests()
{
	std::cout << "\e[1mCreating 4 unit squad ...\e[0m" << std::endl;
	Squad *my_squad = new Squad;
	std::cout << "Number of Units : " << my_squad->getCount() << std::endl;
	my_squad->push(new TacticalMarine);
	std::cout << "Number of Units : " << my_squad->getCount() << std::endl;
	my_squad->push(new AssaultTerminator);
	std::cout << "Number of Units : " << my_squad->getCount() << std::endl;
	my_squad->push(new TacticalMarine);
	std::cout << "Number of Units : " << my_squad->getCount() << std::endl;
	my_squad->push(new AssaultTerminator);
	std::cout << "Number of Units : " << my_squad->getCount() << std::endl;
	std::cout << "\e[1mCreating 3 unit squad ...\e[0m" << std::endl;
	Squad *my_squad2 = new Squad;
	my_squad2->push(new AssaultTerminator);
	my_squad2->push(new AssaultTerminator);
	my_squad2->push(new AssaultTerminator);
	std::cout << "Number of Units : " << my_squad2->getCount() << std::endl;
	std::cout << "\e[1mCopying 4 unit squad in 3 unit squad ...\e[0m" << std::endl;
	*my_squad2 = *my_squad;
	std::cout << "Number of Units : " << my_squad2->getCount() << std::endl;
	std::cout << "\e[1mDeleting first squad ... \e[0m" << std::endl;
	delete my_squad;
	std::cout << "\e[1mAdding a unit by clone() : \e[0m" << std::endl;
	my_squad2->push(my_squad2->getUnit(2)->clone());
	std::cout << "Number of Units : " << my_squad2->getCount() << std::endl;
	std::cout << "\e[1mTrying to add a unit already inside squad : \e[0m" << std::endl;
	my_squad2->push(my_squad2->getUnit(1));
	std::cout << "Number of Units : " << my_squad2->getCount() << std::endl;
	std::cout << "\e[1mTrying to add a null unit : \e[0m" << std::endl;
	my_squad2->push(0);
	std::cout << "Number of Units : " << my_squad2->getCount() << std::endl;
	std::cout << std::endl;
	delete my_squad2;
}

int		main()
{
	asked_output();
	more_tests();
}