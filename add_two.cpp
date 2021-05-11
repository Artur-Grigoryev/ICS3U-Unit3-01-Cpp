// Copyright (c) 2021 Artur Grigoryev All rights reserved
//
// Created by Malcolm Tompkins
// Created on May 8, 2021
// This file calculates the sum of two user input numbers
#include <iostream>

int number1 , number2, sum;
int main() {
    // Function that calculates the sum
    std::cout << "Input your first number: ";
    std::cin >> number1;
    std::cout << "Input your second number: ";
    std::cin >> number2;
    // User input
    sum = number1 + number2;
    // Process
    std::cout << "The sum of your two numbers is: ";
    std::cout << sum;
}
