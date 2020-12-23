//***************************************************
/** クラスの練習、C++版
 * 12/23 */
//***************************************************

#include <iostream>
#include "ANIMAL.h"

Animal::Animal()
{
    this->name = "no name";
    this->age = 0;
    this->weight = 0;
    this->power = 0;
}

void Animal::setName(std::string name)
{
    this->name = name;
}

void Animal::setAge(int age)
{
    this->age = age;
}

void Animal::setWeight(double weight)
{
    this->weight = weight;
}

void Animal::setPower(int power)
{
    this->power = power;
}

void Animal::printAnimal()
{
    std::cout << "name : [" << this->name << std::endl;
    std::cout << "age : [" << this->age << std::endl;
    std::cout << "weight : [" << this->weight << std::endl;
    std::cout << "power : [" << this->power << std::endl;
}