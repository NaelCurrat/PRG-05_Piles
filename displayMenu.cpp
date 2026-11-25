//
// Created by Jib on 18.11.2026.
//
#include "displayMenu.h"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <ostream>

void displayMenu() {

    std::cout << "Ce programme permet de manipuler une pile d'entiers." << std::endl << std::endl;

    std::cout << "1 - Empiler" << std::endl
              << "2 - Depiler" << std::endl
              << "3 - Consulter le sommet" << std::endl
              << "4 - Modifier l'element au sommet" << std::endl
              << "5 - Verifier si la pile est vide" << std::endl
              << "6 - Afficher le nombre de valeurs" << std::endl
              << "7 - Vider la pile" << std::endl
              << "8 - Afficher toute la pile" << std::endl
              << "0 - Quitter" << std::endl << std::endl;
}

void displayPile(std::array<std::string, Array_size> &pile) {
    if (pile_counter == 1) {
        std::cout << "Sommet/Fond ->" << pile[0] << std::endl;
    }else {
        for (int i = pile_counter - 1; i >= 0; i--) {
            if (i == pile_counter - 1) {
                std::cout << "Sommet -> ";
            }else if (i == 0) {
                std::cout << "Fond   ->";
                std::cout << std::setw( 1+pile[pile_counter - 1].size());
            }else {
                std::cout << std::setw(10 + pile[pile_counter - 1].size());
            }
            std::cout << pile[i] << std::endl;
        }
    }
}
