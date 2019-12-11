// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Marwan Mashaly
// Created on December 2019
// This program checks if the entered number is the same as random number

#include <string.h>
#include <iostream>


std::string StringCheck(std::string string1, std::string str1) {
    // This function reverses the string


    for (char letters : string1) {
        str1 = letters + str1;
        std::cout << "String in reverse Order :  " << str1 << std::endl;
    }
    if (string1 == str1) {
        return string1;
    } else {
        return str1;
        }
}


main() {
    // This function takes input from user

    std::string string1;
    std::string str1;
    std::string answer;

    while (true) {
        std::cout << "Please enter your own String : " << std::endl;
        std::cin >> string1;

        answer = StringCheck(string1, str1);
        if (answer == string1) {
            std::cout << "" << std::endl;
            std::cout << "it's a palindrome " << std::endl;
        } else {
            std::cout << "" << std::endl;
            std::cout << "it's not a palindrome " << std::endl;
        }
    }
}
