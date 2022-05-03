// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created in April 2022
// This is a math program, adding number from 1 to n

#include <iostream>
#include <string>
#include <iomanip>

void fahrenheit() {
    // This function adds number from 1 to number the user enters
    std::string temperatureCelsiusString;
    float temperatureCelsiusFloat;
    float temperatureFahrenheit;

    // input
    std::cout << "Enter a temperature (°C): ";
    std::cin >> temperatureCelsiusString;

    // process
    std::cout << "" << std::endl;
    try {
        temperatureCelsiusFloat = std::stof (temperatureCelsiusString);
        temperatureFahrenheit = (9.00 / 5) * temperatureCelsiusFloat + 32;
        std::cout << std::fixed << std::setprecision(2) << std::setfill('0') << temperatureCelsiusFloat << "°C is equal to "
        << std::fixed << std::setprecision(2) << std::setfill('0') << temperatureFahrenheit << "°F." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid number!" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}


int main() {
    // this function calls out other functions
    fahrenheit();
}
