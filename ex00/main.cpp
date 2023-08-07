/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:37:08 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/07 12:18:37 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	Animal test;
	Dog chien;
	Cat chat;

	test.makeSound();
	chien.makeSound();
	chat.makeSound();
	
}

