//
// Created by Jib on 18.11.2026.
//
#include "pop.h"
#include "config.h"
#include <iostream>
void pile_pop(std::array<std::string, Array_size> &pile) {
    pile_counter--;
    std::cout << "Valeur retirée : " << pile[pile_counter] << std::endl;
}
