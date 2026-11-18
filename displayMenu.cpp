//
// Created by Jib on 18.11.2026.
//
#include "displayMenu.h"
#include <cstdlib>
#include <iostream>
#include <ostream>

void displayMenu() {

    std::cout << "Ce programme permet de manipuler une pile d'entiers." << std::endl << std::endl;

    std::cout << "1 - Empiler" << std::endl
              << "2 - Dépiler" << std::endl
              << "3 - Consulter le sommet" << std::endl
              << "4 - Modifier l'élément au sommet" << std::endl
              << "5 - Vérifier si la pile est vide" << std::endl
              << "6 - Afficher le nombre de valeurs" << std::endl
              << "7 - Vider la pile" << std::endl
              << "8 - Afficher toute la pile" << std::endl
              << "0 - Quitter" << std::endl< << std::endl;
}
