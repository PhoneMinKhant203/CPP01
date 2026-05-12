/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phonekha <phonekha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 19:00:56 by phonekha          #+#    #+#             */
/*   Updated: 2026/05/12 19:10:20 by phonekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <cstdlib>

class Zombie 
{
	private:
		std::string name;
	
	public:
		void announce(void);
		std::string getName();
		void setName(std::string name);
		Zombie();
		Zombie(std::string name);
		~Zombie();
};

Zombie *zombieHorde(int N, std::string name);

#endif



