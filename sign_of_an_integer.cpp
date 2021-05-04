// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: May 2021
// This program checks the sign of an integer inputted by the user

#include <iostream>

int main() {
    // this function determines the sign of the inputted integer

    // variable
    int number;

    // input
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // process & output
    if (number > 0) {
        std::cout << "\nThis integer is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "\nThis integer is negative." << std::endl;
    } else {
        std::cout << "\nThis number is 0." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
