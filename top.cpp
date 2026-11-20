//
// Created by Jib on 18.11.2026.
//
#include "top.h"
#include "size.h"
std::string pile_top(std::array<std::string, Array_size> &pile) {
    try {
        std::string top = pile[pile_counter - 1];
        return top;
    }catch (std::exception &e) {
        throw std::underflow_error("Erreur : impossible de consulter le sommet d'une pile vide.");
    }
}


void pile_top(std::array<std::string, Array_size> &pile, int value) {
    if (!pile_counter) {
        throw std::underflow_error("Erreur : impossible de consulter le sommet d'une pile vide.");
    }else {

    }
}