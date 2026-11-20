//
// Created by Jib on 18.11.2026.
//
#include "userChoise.h"
#include <iostream>
int userChoise() {
    int userChoise;
    do {
        std::cin >>userChoise;
    }while( !(userChoise>=0 && userChoise<=8) );
    return userChoise;
}