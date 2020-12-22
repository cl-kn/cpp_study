#include "PERSON.h"
#include <stdio.h>

PERSON::PERSON()
{
    this->name = "no name";
    this->age = 0;
    this->height = 0;
    this->weight = 0;
}

void PERSON::setName(const char *name)
{
    this->name = name;
}

void PERSON::setAge(int age)
{
    this->age = age;
}

void PERSON::setHeight_Weight(double height, double weight)
{
    this->height = height;
    this->weight = weight;
}

void PERSON::printPerson()
{
    printf("name : [%s]\n", this->name);
    printf("age : [%d]\n", this->age);
    printf("height : [%.1lf]\n", this->height);
    printf("weight : [%.1lf]\n", this->weight);
}