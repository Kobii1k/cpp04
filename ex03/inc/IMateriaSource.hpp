/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:11:12 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/20 16:13:11 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
	#define IMATERIASOURCE_HPP

	#include "main.h"

	class IMateriaSource
	{
		public:
			virtual ~IMateriaSource() {}
			virtual void learnMateria(AMateria*) = 0;
			virtual AMateria* createMateria(std::string const & type) = 0;
	};

#endif