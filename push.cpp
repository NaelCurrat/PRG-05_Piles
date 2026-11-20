//
// Created by Jib on 18.11.2026.
//
#include "push.h"
#include <array>
#include <stdexcept>
#include <string>
#include <iostream>
#include "config.h"

void pile_push(std::array<std::string, Array_size> &pile, int userValue) {
    try{
    for (int i = 0; i < Array_size - 1; i++) {
        if (pile[i] == "?") {
            pile[i] = userValue;
        }
    }
        pile_counter++;
    }catch(const std::overflow_error& erreur) {
        std::cout << "Erreur : " << erreur.what() << std::endl;
    }
}