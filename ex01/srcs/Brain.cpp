/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:56:13 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/20 13:11:59 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = "void";
	std::cout << "Brain" << CONSTRUCTOR << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain" << DESTRUCTOR << std::endl;
}

Brain::Brain(Brain const &copy)
{
	*this = copy;
	std::cout << "Brain" << CPYCONSTRUCTOR << std::endl;
}

Brain const    &Brain::operator=(Brain const &copy)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
	return (*this);
}
