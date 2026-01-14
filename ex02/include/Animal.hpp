/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:55:26 by abidaux           #+#    #+#             */
/*   Updated: 2026/01/14 16:53:11 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal {
    public : 
        Animal();
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal();
        void makeSound() const;
        std::string getType() const;
    protected :
        std::string type;
        std::string animalsound;
};

class Cat : public Animal {
    public :
        Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat();
    private :
        class Brain* brain;
};

class Dog : public Animal {
    public :
        Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();
    private :
        class Brain* brain;
};