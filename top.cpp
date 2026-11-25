//
// Created by Jib on 18.11.2026.
//
#include "top.h"

#include "pop.h"
#include "push.h"
#include "size.h"
std::string pile_top(std::array<std::string, Array_size> &pile) {
    if (!(pile_counter)) { // si la pile est vide
        throw std::underflow_error("Erreur : impossible de consulter le sommet d'une pile vide.");
    }else { // si la pile n'est pas vide
        std::string top = pile[pile_counter - 1];
        return top;
    }
}


void pile_top(std::array<std::string, Array_size> &pile, int value) {
    if (!(pile_counter)) { // si la pile est vide
        throw std::underflow_error("Erreur : impossible de remplacer le sommet d'une pile vide.");
    }else { // si la pile n'est pas vide
        pile_pop(pile);
        pile_push(pile, value);
    }
}