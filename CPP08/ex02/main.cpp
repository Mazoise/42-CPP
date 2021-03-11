/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <mchardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 13:34:25 by mchardin          #+#    #+#             */
/*   Updated: 2021/03/02 10:55:48 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	std::cout << std::endl << "Creating MutantStack<int>" <<std::endl;
	MutantStack<int> mstack;
	std::cout << "Pushing 5 and 17..." <<std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top : " << mstack.top() << std::endl;
	std::cout << "Size : " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "Size after pop : " << mstack.size() << std::endl;
	std::cout << "Pushing 3, 5, 737, 0..." << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "Size : " << mstack.size() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Printing all ..." << std::endl;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl << std::endl << "Making copy of MutantStack<int>" << std::endl;
	MutantStack<int> copy_mstack(mstack);
	MutantStack<int>::iterator it2 = copy_mstack.begin();
	MutantStack<int>::iterator ite2 = copy_mstack.end();

	std::cout << "Printing all ..." << std::endl;
	while (it2 != ite2)
	{
		std::cout << *it2 << " ";
		++it2;
	}
	std::cout << std::endl;
	std::cout << std::endl << "Creating MutantStack<std::string>" <<std::endl;
	MutantStack<std::string> mstack2;
	std::cout << "Pushing \"Hello\" and \"Word\"..." <<std::endl;
	mstack2.push("Hello");
	mstack2.push("Word");
	std::cout << "Top : " << mstack2.top() << std::endl;
	std::cout << "Poping \"Word\"" << std::endl;
	mstack2.pop();
	std::cout << "Pushing \"World\"" << std::endl;
	mstack2.push("World");
	MutantStack<std::string>::iterator it3 = mstack2.begin();
	MutantStack<std::string>::iterator ite3 = mstack2.end();
	std::cout << "Printing all ..." << std::endl;
	while (it3 != ite3)
	{
		std::cout << *it3 << " ";
		++it3;
	}
	std::cout << std::endl;
}
