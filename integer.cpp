// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Created on : October 11, 2022
// This program asks the user to input an integer and then the program
// displays whether or not the integer is negative, positive or zero

#include <iostream>


int main() {
    // Initialize Variable
    int user_integer;

    // Asks user to input an integer
    std::cout << "Enter an integer: ";
    std::cin >> user_integer;

    // IF the user inputs zero
    if (user_integer == 0) {
        std::cout << user_integer << " is just zero." << std::endl;

    // IF the user inputs a positive integer
    } else if (user_integer > 0) {
        std::cout << user_integer << " is a positive integer" << std::endl;

    // IF the user enters a negative number
    } else {
        std::cout << user_integer << " is a negative integer" << std::endl;
    }
}
