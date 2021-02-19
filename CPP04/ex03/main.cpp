/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 19:09:22 by mchardin          #+#    #+#             */
/*   Updated: 2021/02/18 22:50:17 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void	asked_output()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	std::cout << std::endl;
}

void	more_tests()
{
	MateriaSource *src = new MateriaSource();
	Character *me = new Character("me");
	AMateria *tmp_hello = src->createMateria("hello");
	AMateria *tmp_cure = new Cure();
	AMateria *tmp_ice = new Ice();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(tmp_hello);
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(tmp_cure);
	for (int i = 0; i < 4; i++)
		std::cout << "Src slot " << i << " : " << src->getSlots(i)->getType() << std::endl;
	me->equip(tmp_cure);
	me->equip(tmp_cure);
	me->equip(tmp_cure);
	me->equip(tmp_cure);
	me->equip(new Ice());
	me->equip(tmp_hello);
	me->equip(new Cure());
	me->equip(new Ice());
	me->equip(tmp_ice);
	for (int i = 0; i < 4; i++)
		std::cout << "My slot " << i << " : " << me->getSlots(i)->getType() << std::endl;
	me->use(1, *me);
	std::cout << "My HP : " << me->getSlots(1)->getXP() << std::endl;
	me->use(1, *me);
	std::cout << "My HP : " << me->getSlots(1)->getXP() << std::endl;
	me->use(1, *me);
	std::cout << "My HP : " << me->getSlots(1)->getXP() << std::endl;
	me->use(1, *me);
	std::cout << "My HP : " << me->getSlots(1)->getXP() << std::endl;
	delete tmp_ice;
	delete me;
	delete src;
}

int		main()
{
	asked_output();
	more_tests();
}
