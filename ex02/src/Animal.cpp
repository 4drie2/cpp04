/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:57:57 by abidaux           #+#    #+#             */
/*   Updated: 2026/01/14 16:53:11 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Brain.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Animal copy constructor called" <<  std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Animal sound: " << animalsound << std::endl;
}

std::string Animal::getType() const {
    return this->type;
}

Cat::Cat() {
    this->type = "Cat";
    this->animalsound = "Meow";
    this->brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    this->brain = new Brain(*other.brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::~Cat() {
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

Dog::Dog() {
    this->type = "Dog";
    this->animalsound = "Woof";
    this->brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    this->brain = new Brain(*other.brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

Dog::~Dog() {
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}