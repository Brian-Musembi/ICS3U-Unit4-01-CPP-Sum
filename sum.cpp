// Copyright (c) 2021 Brian Musembi All rights reserved.
//
// Created by Brian Musembi
// Created on May 2021
// This program finds the sum of all natural numbers preceding the
//    number inputted by the user


#include <iostream>
#include <string>

int main() {
    // this function will calculate the sum of positive numbers
    //      between 0 and user input

    std::cout << "This program adds up all the positive integers from 0 to "
              << "whatever number you input." << std::endl;

    // variable declarations
    int loopCounter = 0;
    int numberSum = 0;
    std::string userInput;
    int userInputInt;

    // input
    std::cout << "Please input a positive integer: ";
    std::cin >> userInput;
    std::cout << "" << std::endl;

    // process
    try {
        userInputInt = std::stoi(userInput);

        if (userInputInt > 0) {
            while (loopCounter < userInputInt) {
                numberSum = numberSum + (loopCounter + 1);
                loopCounter = loopCounter + 1;
            }
            // output
            std::cout << "The sum of all positive numbers from 0 "
                      << "to " << userInputInt << " is " << numberSum
                      << "." << std::endl;
        } else {
            // output
            std::cout << userInputInt << " isn't a positive integer!";
        }
    } catch (std::invalid_argument) {
        std::cout << "That isn't a number! Try again." << std::endl;
    }
}
