/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:14:31 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/07 18:06:27 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include "colors.hpp"
class Animal {
	public:
		Animal();
		virtual ~Animal();
		Animal(std::string type);
		Animal(const Animal& src);
		Animal& operator=(const Animal& rhs);

		virtual void makeSound() const;
		std::string getType() const;
		
		protected:
			std::string type;
};

#endif
