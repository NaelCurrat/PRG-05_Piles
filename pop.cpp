//
// Created by Jib on 18.11.2026.
//
#include "pop.h"
#include "config.h"
#include <iostream>
void pile_pop(std::array<std::string, Array_size> &pile) {
    if (!(pile_counter)) { // si la pile est vide
        throw std::overflow_error("impossible de dépiler une pile vide.");
    }else { // si la pile n'est pas vide
        pile_counter--;
    }
}
