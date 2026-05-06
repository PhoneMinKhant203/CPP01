/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phonekha <phonekha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 19:11:56 by phonekha          #+#    #+#             */
/*   Updated: 2026/05/06 19:15:14 by phonekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
	Zombie a;
	Zombie* newzombie = a.newZombie("Foo");
	Zombie* newzombie2 = a.newZombie("Foo2");
	a.randomChump("Foo3");
	std::cout << a.getName() << std::endl;
	std::cout << newzombie->getName() << std::endl;
	std::cout << newzombie2->getName() << std::endl;

	delete(newzombie);
	delete(newzombie2);
	return (0);
}
