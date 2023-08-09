/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:54:42 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/09 16:32:18 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type) {
}

AMateria::AMateria(AMateria const & src) {
	*this = src;
}

AMateria & AMateria::operator=(AMateria const & src) {
	if (this != &src)
		this->_type = src._type;
	return *this;
}

void AMateria::use(ICharacter& target) {
	std::cout << "use " << this->_type << " on " << target.getName() << std::endl;
}

std::string const & AMateria::getType() const {
	return this->_type;
}

AMateria::~AMateria() {
}
