/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phonekha <phonekha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 23:00:46 by phonekha          #+#    #+#             */
/*   Updated: 2026/06/20 18:01:48 by phonekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << this->name << " attack with their " << this->arma.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapongiven) : name(name), arma(weapongiven)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}
