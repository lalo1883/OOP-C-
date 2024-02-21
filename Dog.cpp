//
// Created by MSI Sword on 2/20/2024.
//

#include "Dog.h"
void Dog::feed() {
    hungry = false;
};
void Dog::walk() {
    hungry = true;
}

void Dog::setName(std::string name) {
    name_ = name;
};


void Dog::setAge(int age) {
    age_ = age;
}

Dog::Dog(std::string name, int age) {
    this->name_ = name;
    this->age_ = age;
}

std::string Dog::getName() {
    return this->name_;
}

int Dog::getAge() {
    return  this->age_;
}

