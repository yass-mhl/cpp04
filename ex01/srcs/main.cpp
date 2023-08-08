/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:37:08 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/08 18:24:57 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main() {
	{
		std::cout << "================== TEST DEEP COPY ==================\n" << std::endl;

		Cat *cat = new Cat();
		Dog *dog = new Dog();
		
		cat->getBrain()->setIdea(0, "I like mouse");
		cat->getBrain()->setIdea(1, "I like milk");
		dog->getBrain()->setIdea(0, "I like bones");
		dog->getBrain()->setIdea(1, "I like cats");

		std::cout << "Cat ideas:" << std::endl;
		for (int i = 0; i < 2; i++) std::cout << "Idea: " << cat->getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << "Dog ideas:" << std::endl;
		for (int i = 0; i < 2; i++) std::cout << "Idea: " << dog->getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		Cat *cat2 = new Cat(*cat);
		Dog *dog2 = new Dog(*dog);
		std::cout << std::endl;

		delete cat;
		delete dog;

		std::cout << "Cat2 ideas" << std::endl;
		for (int i = 0; i < 2; i++) std::cout << "Idea: " << cat2->getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << "Dog2 ideas:" << std::endl;
		for (int i = 0; i < 2; i++) std::cout << "Idea: " << dog2->getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;
		
		delete dog2;
		delete cat2;
		
		std::cout << "================ SUBJECT ARRAY TEST ================\n" << std::endl;

		Animal *animals[10];

		for (int i = 0; i < 10; i++) {
			if (i < 5) {
				animals[i] = new Cat();
			} else {
				animals[i] = new Dog();
			}
		}

		std::cout << std::endl;

		for (int i = 0; i < 10; i++) {
			animals[i]->makeSound();
		}

		std::cout << std::endl;
		
		for (int i = 0; i < 10; i++) {
			delete animals[i];
		}
	}
	return 0;
}

