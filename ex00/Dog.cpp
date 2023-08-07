/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:09:53 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/07 11:26:02 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << RED << "Dog default constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src) {
    std::cout << RED << "Dog copy constructor called" << RESET << std::endl;
    *this = src;
}

Dog& Dog::operator=(const Dog& rhs) {
    if (this != &rhs)
        this->type = rhs.getType();
    return *this;
}

void Dog::makeSound() const {
    std::cout << RED << "* wouf *" << RESET << std::endl;
}

Dog::~Dog() {
    std::cout << RED << "Dog destructor called" << RESET << std::endl;
}
