/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrien <adrien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:57:57 by abidaux           #+#    #+#             */
/*   Updated: 2026/01/15 01:55:33 by adrien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Colors.hpp"

//! Animal class implementation

Animal::Animal() : type("Animal") {
    std::cout << C_ANIMAL << "Animal" << C_DEF << " default constructor called" << RST << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << C_ANIMAL << "Animal" << C_CPY << " copy constructor called" << RST << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    std::cout << C_ANIMAL << "Animal" << C_ASN << " copy assignment operator called" << RST << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << C_ANIMAL << "Animal" << C_DST << " destructor called" << RST << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Animal sound" << std::endl;
}


std::string Animal::getType() const {
    return this->type;
}
