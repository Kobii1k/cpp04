/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:56:12 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/20 13:57:07 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
	#define ANIMAL_HPP

	#include "main.h"

	class Animal
	{
	protected:
		std::string		type;
	public:
						Animal(void);
						virtual ~Animal(void);
						Animal(Animal const &copy);
		Animal const    &operator=(Animal const &copy);
		virtual	void	makeSound(void) const;
		std::string		getType(void) const;
	};
#endif
