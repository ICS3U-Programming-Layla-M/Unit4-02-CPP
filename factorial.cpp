// Copyright (c) Year Layla Michel All rights reserved.
//
// Created by: Layla Michel
// Date: May 21, 2021
// This program asks the user to input a number and then
// calculates and displays the factorial of that number

#include <iostream>
#include <string>

int main() {
    // declare variables
    int counter = 0, factorial = 1, numberAsInt;
    std::string numberAsString;

    // ask the user for a whole number
    std::cout << "Enter a whole number: ";
    std::cin >> numberAsString;

    try {
        // convert from string to integer
        numberAsInt = std::stoi(numberAsString);

        if (numberAsInt < 0) {
            // check if number is negative
            std::cout << numberAsString << " is not a whole number.\n";
        } else if (numberAsInt == 0) {
            // check if number is 0
            std::cout << "0! = 1\n";
        } else {
            // calculate the factorial
            do {
                counter = counter + 1;
                factorial = counter * factorial;
                std::cout << "Tracking " << counter << " times through loop.\n";
            } while (counter < numberAsInt);
            std::cout << "\n";
            // display the factorial of the number
            std::cout << numberAsInt << "! = " << factorial;
        }
    } catch (std::invalid_argument) {
        // error message
        std::cout << numberAsString << " is not a whole number.\n";
    }
}
