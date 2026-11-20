//
// Created by Jib on 18.11.2026.
//
#include <iostream>
#include "clear.h"
#include "config.h"

void pile_clear(std::array<std::string, Array_size> &pile) {
    pile.fill("?");
    pile_counter = 0;
}
