/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phonekha <phonekha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 23:10:32 by phonekha          #+#    #+#             */
/*   Updated: 2026/06/20 17:28:16 by phonekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
	if(this->armb->getType().empty())
	{
		std::cout << this->name << " doesn't have a weapon" << std::endl;
		return ;
	}
	std::cout << this->name << " attacks with their " << this->armb->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &newweapon)
{
	armb = &newweapon;
	return ;
}

HumanB::HumanB(std::string name) : name(name)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}
