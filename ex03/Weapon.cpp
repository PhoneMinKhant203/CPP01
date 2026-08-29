/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phonekha <phonekha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 22:51:17 by phonekha          #+#    #+#             */
/*   Updated: 2026/06/14 22:54:20 by phonekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(std::string newtype)
{
	this->type = newtype;
	return ;
}

Weapon::Weapon(std::string name)
{
	this->type = name;
}

Weapon::Weapon()
{
	
}

Weapon::~Weapon()
{
	
}
