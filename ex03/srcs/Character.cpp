/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:14:55 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/09 16:48:17 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name): _name(name), _nbMateria(0) {
	for (int i = 0; i < _maxMateria; i++)
		_inventory[i] = NULL;
}

Character::Character(Character const & src): _name(src._name), _nbMateria(src._nbMateria) {
	for (int i = 0; i < _maxMateria; i++)
	{
		if (src._inventory[i])
			_inventory[i] = src._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

Character & Character::operator=(Character const & src) {
	if (this != &src) {
		this->_name = src._name;
		this->_nbMateria = src._nbMateria;
		for (int i = 0; i < _maxMateria; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = NULL;
			if (src._inventory[i])
				this->_inventory[i] = src._inventory[i]->clone();
		}
	}
	return *this;
}

std::string const & Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m) {
	if (!m) {
		std::cout << RED << "Error: Materia unknown " << RESET << std::endl;
		return ;
	}
	for (int i = 0; i < _maxMateria; i++) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
			this->_nbMateria++;
			std::cout << GREEN << "Materia " << m->getType() << " equiped" << RESET << std::endl;
			return ;
		}
	}
	std::cout << RED << "Error: Inventory full" << RESET << std::endl;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < _maxMateria) {
		this->_inventory[idx] = NULL;
		this->_nbMateria--;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < _maxMateria && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}

Character::~Character() {
	for (int i = 0; i < _maxMateria; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}
