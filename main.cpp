

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
    displayMenu();
    int menuEntry = 0;
    do {
        menuEntry = userChoise();
        std::cout << "Votre choix : " << menuEntry << std::endl;
        switch (menuEntry) {
            case 0:std::cout << "Fin de programme." << std::endl;
                break;
            case 1:
                try{
                    pile_push(pile, askNumber("Valeur : "));
                    std::cout << "Valeur empilee !" << std::endl;
                }catch(const std::overflow_error& erreur) {
                    std::cout << "Erreur : " << erreur.what() << std::endl;
                }
                break;
            case 2:
                try{
                    pile_pop(pile);
                    std::cout << "Valeur retiree : " << pile[pile_counter] << std::endl;
                }catch(const std::overflow_error& erreur) {
                    std::cout << "Erreur : " << erreur.what() << std::endl;
                }
                break;
            case 3: std::cout << "Sommet : " << pile_top(pile);
                break;
            case 4:
                try{
                    pile_top(pile, askNumber("Valeur de remplacement : "));
                    std::cout << "Valeur remplacee." << std::endl;
                }catch(const std::underflow_error& erreur) {
                    std::cout << erreur.what() << std::endl;
                }
                break;
            case 5:
                if (pile_empty(pile)) {
                    std::cout << "La pile est vide" << std::endl;
                }else {
                    std::cout << "La pile n'est pas vide" << std::endl;
                }
                break;
            case 6:
                std::cout << "Nombre de valeurs : " << pile_counter << std::endl;
                break;
            case 7:
                pile_clear(pile);
                std::cout << "Pile videe." << std::endl;
                break;
            case 8: std::cout << "Afficher toute la pile" << std::endl; // Placeholder, à remplacer par la methode
                displayPile(pile);
                break;
        }
        std::cout << "pile: [ ";
        for (const std::string& element : pile) {
            std::cout  << element << ", ";
        }
        std::cout << "x]";

        std::cout << std::endl << std::endl;

    }while (menuEntry!=0);

    return EXIT_SUCCESS;
}