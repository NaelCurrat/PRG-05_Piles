const int Array_size = 5;

#include <iostream>
#include <cstdlib>
#include "clear.h"
#include "empty.h"
#include "pop.h"
#include "push.h"
#include "size.h"
#include "top.h"
#include "displaymenu.h"
#include "userChoise.h"



int main() {

    std::array<std::string, Array_size> pile;
    pile.fill("?");

    displayMenu();

    return EXIT_SUCCESS;
}