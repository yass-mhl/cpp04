/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:24:16 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/09 15:36:43 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
}

Cure::Cure(Cure const & src): AMateria("cure") {
	*this = src;
}

Cure & Cure::operator=(Cure const & src) {
	if (this != &src)
		this->_type = src._type;
	return *this;
}

AMateria* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target) {
	std::cout << GREEN << "Heals " << target.getName() << "'s wounds" << RESET << std::endl;
}

Cure::~Cure() {
}
