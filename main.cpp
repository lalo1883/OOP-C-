#include <iostream>

#include "Dog.h"

int main() {
    Dog tommy("Tommy", 30);

    int opt ;
    while (true) {
        std::cout << "1. Walk, 2. Feed, 3. Exit" << std::endl;
        std::cin >> opt;
        switch (opt) {
            case 1:
                tommy.walk();
                tommy.hungry ? std::cout << "Tommy is hungry \n" : std::cout <<  "Tommy is full \n";
                break;
            case 2:
                tommy.feed();
                tommy.hungry ? std::cout << "Tommy is hungry \n" : std::cout <<  "Tommy is full \n";
                break;
            case 3:
                return false;
            default:
                return false;
        }
    }
}