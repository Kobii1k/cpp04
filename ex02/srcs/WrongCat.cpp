/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:54:29 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/20 12:58:33 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	type = "WrongCat";
	std::cout << "WrongCat" << CONSTRUCTOR << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat" << DESTRUCTOR << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy)
{
	*this = copy;
	std::cout << "WrongCat" << CPYCONSTRUCTOR << std::endl;
}

WrongCat const    &WrongCat::operator=(WrongCat const &copy)
{
	this->type = copy.type;
	return (*this);
}

void	WrongCat::makeSound(void)
{
	std::cout << "*wrong meow.. wrong meow!*" << std::endl;
}
