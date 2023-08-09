/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:10:34 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/09 16:11:15 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _nbLearned(0) {
	for (int i = 0; i < _maxMateria; i++)
		this->_learned[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	*this = src;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src) {
	if (this != &src) {
		for (int i = 0; i < _maxMateria; i++) {
			if (this->_learned[i])
				delete this->_learned[i];
			this->_learned[i] = src._learned[i]->clone();
		}
		this->_nbLearned = src._nbLearned;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	if (this->_nbLearned < _maxMateria) {
		this->_learned[this->_nbLearned] = m;
		this->_nbLearned++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < _maxMateria; i++) {
		if (this->_learned[i] && this->_learned[i]->getType() == type)
			return this->_learned[i]->clone();
	}
	return NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < _maxMateria; i++) {
		if (this->_learned[i])
			delete this->_learned[i];
	}
}
