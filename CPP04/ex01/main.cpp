/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 17:51:49 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/17 19:03:06 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

void	asked_output()
{
	Character *me = new Character("me");
	std::cout << *me;
	Enemy *b = new RadScorpion();
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	delete me;
	delete pf;
	delete pr;
	std::cout << std::endl;
}

void	more_tests()
{
	Character me = Character("me");
	Enemy *a = new SuperMutant();
	Enemy *b = new RadScorpion();
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();

	std::cout << me;
	std::cout << a->getType() << " : HP = " << a->getHP() << std::endl;
	std::cout << b->getType() << " : HP = " << b->getHP() << std::endl;
	std::cout << pr->getName() << " : AP cost = " << pr->getAPCost() << ", damage = " << pr->getDamage() << std::endl;
	std::cout << pf->getName() << "   : AP cost = " << pf->getAPCost() << ", damage = " << pf->getDamage() << std::endl;

	me.equip(pr);
	std::cout << me;
	me.attack(a);
	std::cout << me;
	std::cout << a->getType() << " : HP = " << a->getHP() << std::endl;
	me.attack(b);
	std::cout << me;
	std::cout << b->getType() << " : HP = " << b->getHP() << std::endl;
	me.equip(pf);
	std::cout << me;
	me.attack(a);
	std::cout << me;
	std::cout << a->getType() << " : HP = " << a->getHP() << std::endl;
	me.attack(a);
	std::cout << me;
	std::cout << a->getType() << " : HP = " << a->getHP() << std::endl;
	me.attack(a);
	std::cout << me;
	std::cout << a->getType() << " : HP = " << a->getHP() << std::endl;
	me.attack(a);
	me.recoverAP();
	std::cout << me;
	me.recoverAP();
	std::cout << me;
	me.recoverAP();
	std::cout << me;
	me.recoverAP();
	std::cout << me;
	me.recoverAP();
	std::cout << me;
	me.attack(a);
	std::cout << me;
	delete pf;
	delete pr;
	delete b;
}

int main()
{
	asked_output();
	more_tests();

}
