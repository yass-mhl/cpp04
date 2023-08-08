/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:54:05 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/08 18:19:08 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << YELLOW << "Brain default constructor called" << RESET << std::endl;
}

Brain::Brain(const Brain& src) {
	std::cout << YELLOW << "Brain copy constrctor called" << RESET << std::endl;
	*this = src;
}

Brain& Brain::operator=(const Brain& rhs) {
	if (this != &rhs) {
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.getIdea(i);
	}
	return (*this);
}

std::string Brain::getIdea(int index) const {
	return this->ideas[index];
}

void Brain::setIdea(int i, std::string idea) {
	this->ideas[i] = idea;
}

Brain::~Brain() {
	std::cout << YELLOW << "Brain destructor called" << RESET << std::endl;
}
