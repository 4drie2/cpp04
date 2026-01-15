/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrien <adrien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 00:22:40 by adrien            #+#    #+#             */
/*   Updated: 2026/01/15 02:06:30 by adrien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"
#include "../include/Colors.hpp"

//! WrongAnimal class implementation

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << C_WRONG << "WrongAnimal" << C_DEF << " default constructor called" << RST << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
    std::cout << C_WRONG << "WrongAnimal" << C_CPY << " copy constructor called" << RST << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    std::cout << C_WRONG << "WrongAnimal" << C_ASN << " copy assignment operator called" << RST << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << C_WRONG << "WrongAnimal" << C_DST << " destructor called" << RST << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const {
    return this->type;
}

//! WrongCat class implementation

void WrongCat::makeSound() const {
    std::cout << "Animal sound: Meow" << std::endl;
}

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << C_WRONG << "WrongCat" << C_DEF << " default constructor called" << RST << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << C_WRONG << "WrongCat" << C_CPY << " copy constructor called" << RST << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << C_WRONG << "WrongCat" << C_ASN << " copy assignment operator called" << RST << std::endl;
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << C_WRONG << "WrongCat" << C_DST << " destructor called" << RST << std::endl;
}
