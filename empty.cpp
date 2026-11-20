//
// Created by Jib on 18.11.2026.
//
#include "empty.h"
#include <array>
#include <string>
#include <iostream>
#include "config.h"


bool pile_empty(std::array<std::string, Array_size> &pile) {
    for (int i = 0; i < pile.size(); i++) {
        if (pile[i] == "?") {
            return true;
        }
    }
    return false;
}