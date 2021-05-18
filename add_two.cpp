// Copyright (c) 2021 Artur Grigoryev All rights reserved
//
// Created by Artur Grigoryev
// Created on May 8, 2021
// This file calculates the sum of two user input numbers


#include <iostream>


int main() {
    int number1 , number2, sum;
    // Function that calculates the sum
    
    // User input
    std::cout << "Input your first number: ";
    std::cin >> number1;
    std::cout << "Input your second number: ";
    std::cin >> number2;
    
    // Process
    sum = number1 + number2;
    std::cout << "The sum of your two numbers is: ";
    std::cout << number1;
    std::cout << " + ";
    std::cout << number2;
    std::cout << " = ";
    std::cout << sum;
}
