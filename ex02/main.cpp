/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phonekha <phonekha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 21:20:42 by phonekha          #+#    #+#             */
/*   Updated: 2026/06/14 21:31:04 by phonekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void print_address(std::string* stringPTR, std::string& stringREF)
{
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	return ;
}

void print_value(std::string* stringPTR, std::string& stringREF)
{
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;
	std::cout << &str << std::endl;
	print_address(stringPTR, stringREF);
	std::cout << str << std::endl;
	print_value(stringPTR, stringREF);
}
