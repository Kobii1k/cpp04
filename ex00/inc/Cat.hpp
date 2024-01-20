/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:56:14 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/20 13:56:48 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
	#define CAT_HPP

	#include "Animal.hpp"

	class Cat : public Animal
	{
	public:
						Cat(void);
						~Cat(void);
						Cat(Cat const &copy);
		Cat const		&operator=(Cat const &copy);
		void			makeSound(void) const;
	};
#endif
