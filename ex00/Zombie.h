/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phonekha <phonekha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 16:24:31 by phonekha          #+#    #+#             */
/*   Updated: 2026/05/04 17:16:02 by phonekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie {
	private:
		std::string name;
	
	public:
		Zombie* newZombie(std::string name);
		void randomChump(std::string name);
		void announce(void);
		std::string getName();
		Zombie();
		Zombie(std::string name);
		~Zombie();
};

#endif

