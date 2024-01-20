/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:59:27 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/20 16:13:53 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
	#define AMATERIA_HPP

	#include "main.h"

	class AMateria
	{
	protected:
		[...]
	public:
		AMateria(std::string const & type);
		[...]

		std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	};

#endif