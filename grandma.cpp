// Copyright (C) 2020 St. Mother Teresa HS All rights reserved
//
// created by Ryan Nguyen
// Created on December 2020
// This program ask user for age and checks
//     if it between 25 and 40


#include <iostream>
#include <string>

int main() {
    // this function checks age
    std::string ageAsString;
    int ageAsNumber;

    // input
    std::cout << "Enter your age: ";
    std::cin >> ageAsString;


    // process + output
    try {
        ageAsNumber = std::stoi(ageAsString);
        if (ageAsNumber < 25) {
            std::cout << "Too young";
        } else if (25 <= ageAsNumber && ageAsNumber <= 40) {
            std::cout << "You're the perfect age";
        } else if (ageAsNumber > 40) {
            std::cout << "Too old";
        } else {
            std::cout << "No idea!";
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer";
    }
}
