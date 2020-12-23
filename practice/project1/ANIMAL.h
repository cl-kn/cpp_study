#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
private:
    std::string name;
    int age;
    double weight;
    int power;

public:
    Animal();
    ~Animal();

    void setName(std::string name);
    void setAge(int age);
    void setWeight(double weight);
    void setPower(int power);

    void printAnimal();
};

#endif //ANIMAL_H