//
// Created by MSI Sword on 2/20/2024.
//

#ifndef DOG_H
#define DOG_H
#include <iostream>

class Dog {
public:
    Dog(std::string name, int age);
    bool hungry;
    void feed();
    void walk();
    void setName(std::string name);
    void setAge(int age);
    std::string getName() ;
    int getAge();

private:
    int age_;
    std::string name_;
};



#endif //DOG_H
