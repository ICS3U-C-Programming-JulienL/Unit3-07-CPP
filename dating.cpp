// Copyright (c) 2023 Julien Lamoureux All rights reserved.
// .
// Created by: Julien Lamoureux
// Date: October 30, 2023
// This is a dating program for someone's grandchild

#include <cstdlib>
#include <iostream>

int main() {
    // declare variables
    std::string userAgeString;
    int userAgeInt;

    // get the user age as a string
    std ::cout << "I'll see if you're old enough to date my grandchild."
    << std::endl;
    std::cout << "What is your age: ";
    std::cin >> userAgeString;

    try {
        // convert  the user age to an integer
        userAgeInt = std::stoi(userAgeString);

        // if the user is < 0 or > 120, they are not a valid age
        if (userAgeInt < 0 || userAgeInt > 120) {
            std ::cout << userAgeString << "is not a valid age.\n";
            } else if (userAgeInt < 40 && userAgeInt > 25) {
                //  otherwise if the user > 25 or < 40, they can date them
                std ::cout << "You can date my grandchild.\n";
                } else if (userAgeInt <= 25) {
                    //  otherwise if the user < 25, they are too young
                    std ::cout << "You are too young for my grandchild.\n";
                    } else if (userAgeInt >= 40) {
                        //  otherwise if the user > 40, they are too old
                        std ::cout << "You are too old for my grandchild.\n";
                        }
        } catch (std::invalid_argument) {
        // if user age is not an integer, then tell them their input is invalid
        std ::cout << userAgeString << " is not a valid age.\n";
    }
}
