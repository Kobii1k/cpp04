/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:56:16 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/20 13:56:52 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
	#define DOG_HPP

	#include "Animal.hpp"

	class Dog : public Animal
	{
	public:
						Dog(void);
						~Dog(void);
						Dog(Dog const &copy);
		Dog const		&operator=(Dog const &copy);
		void			makeSound(void) const;
	};
#endif
