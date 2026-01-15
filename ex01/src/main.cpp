/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrien <adrien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 12:11:28 by abidaux           #+#    #+#             */
/*   Updated: 2026/01/15 03:01:21 by adrien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"

#define N 4 // Nombre d'animaux dans le tableau (doit être pair)

int main()
{
    std::cout << "=== 1. TEST DU SUJET (Allocation simple) ===" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j; // Doit supprimer Dog et son Brain
    delete i; // Doit supprimer Cat et son Brain

    std::cout << std::endl << "=== 2. TEST TABLEAU D'ANIMAUX (Boucle) ===" << std::endl;
    const Animal* animals[N];

    // Remplissage : moitié chiens, moitié chats
    for (int k = 0; k < N / 2; k++)
        animals[k] = new Dog();
    for (int k = N / 2; k < N; k++)
        animals[k] = new Cat();

    // Suppression en boucle [cite: 185, 186]
    for (int k = 0; k < N; k++)
        delete animals[k];

    std::cout << std::endl << "=== 3. TEST COPIE PROFONDE (Deep Copy) ===" << std::endl;
    Dog basic;
    {
        Dog tmp = basic; // Appelle le constructeur de copie
        // Si la copie est superficielle, tmp et basic partagent le même pointeur Brain.
    } // tmp est détruit ici. Il supprime son Brain.

    // basic est détruit à la fin du main.
    // Si la copie était superficielle, basic essaierait de supprimer un Brain déjà effacé -> Crash.
    // Si le programme termine sans erreur, la copie profonde fonctionne. [cite: 188, 189]

    return 0;
}
