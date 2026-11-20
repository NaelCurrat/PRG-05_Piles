

#include <iostream>
#include <cstdlib>
#include "clear.h"
#include "empty.h"
#include "pop.h"
#include "push.h"
#include "size.h"
#include "top.h"
#include "displayMenu.h"
#include "userChoise.h"
#include "config.h"


int main() {

    std::array<std::string, Array_size> pile;
    pile.fill("?");

    displayMenu();
    int menuEntry = 0;
    do {
        menuEntry = userChoise();
        std::cout << "Votre choix : " << menuEntry << std::endl;
        switch (menuEntry) {
            case 0:std::cout << "Fin de programme." << std::endl;
                break;
            case 1: std::cout << "Empiler" << std::endl; // Placeholder, à remplacer par la methode
                pile_push(pile, askNumber());
                std::cout << "Valeur empilée !" << std::endl;
                break;
            case 2: std::cout << "Dépiler" << std::endl; // Placeholder, à remplacer par la methode
                break;
            case 3: std::cout << "Consulter le sommet" << std::endl; // Placeholder, à remplacer par la methode
                break;
            case 4: std::cout << "Modifier l'élément au sommet" << std::endl; // Placeholder, à remplacer par la methode
                break;
            case 5: std::cout << "Vérifier si la pile est vide" << std::endl; // Placeholder, à remplacer par la methode
                if (pile_empty(pile)) {
                    std::cout << "La pile est vide" << std::endl;
                }else {
                    std::cout << "La pile n'est pas vide" << std::endl;
                }
                break;
            case 6: std::cout << "Afficher le nombre de valeurs" << std::endl; // Placeholder, à remplacer par la methode
                break;
            case 7: pile_clear(pile);
                break;
            case 8: std::cout << "Afficher toute la pile" << std::endl; // Placeholder, à remplacer par la methode
                break;
        }

    }while (menuEntry!=0);

    return EXIT_SUCCESS;
}