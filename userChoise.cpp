//
// Created by Jib on 18.11.2026.
//
#include "userChoise.h"
#include <iostream>
int userChoise() {
    int userChoiseValue;
    do {
        std::cin >>userChoiseValue;
    }while( !(userChoiseValue>=0 && userChoiseValue<=8) );
    return userChoiseValue;
}

int askNumber(std::string displayMessage) {
    std::cout << displayMessage;
    int userChoiseValue;
    std::cin >> userChoiseValue;
    return userChoiseValue;
}