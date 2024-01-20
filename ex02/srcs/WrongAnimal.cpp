/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:54:32 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/20 12:53:36 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	type = "Undefined Wrong Animal";
	std::cout << "WrongAnimal" << CONSTRUCTOR << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal" << DESTRUCTOR << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	*this = copy;
	std::cout << "WrongAnimal" << CPYCONSTRUCTOR << std::endl;
}

WrongAnimal const    &WrongAnimal::operator=(WrongAnimal const &copy)
{
	this->type = copy.type;
	return (*this);
}

void	WrongAnimal::makeSound(void)
{
	std::cout << "*random WrongAnimal noise*" << std::endl;
}

std::string		WrongAnimal::getType(void)
{
	return (type);
}
