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
        if (pile_counter >= pile.size()) {
            throw std::overflow_error("La pile est deja pleine !");
        }
    pile[pile_counter] = std::to_string(userValue);
        pile_counter++;
}