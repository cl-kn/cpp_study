//***************************************************
/** 2/1
 * 「練習用」
 */
//***************************************************

#include <iostream>
#include <stdio.h>
#include <string.h>

class Dog
{
public:
    std::string name;
    std::string breed;
    int age;

    Dog();

    void setName(std::string name);
    void setBreed(std::string breed);
    void setAge(int age);

    std::string getName() const;
    std::string getBreed() const;
    int getAge() const;

    void printInfo() const;
};

Dog::Dog()
{
    this->name = "";
    this->breed = "";
    this->age = -0;
}

void Dog::setName(std::string name)
{
    this->name = name;
}

void Dog::setBreed(std::string breed)
{
    this->breed = breed;
}

void Dog::setAge(int age)
{
    this->age = age;
}

std::string Dog::getName() const
{
    return this->name;
}

std::string Dog::getBreed() const
{
    return this->breed;
}

int Dog::getAge() const
{
    return this->age;
}

void Dog::printInfo() const
{
    std::cout << "NAME:" << getName() << std::endl;
    std::cout << "BREED:" << getBreed() << std::endl;
    std::cout << "AGE:" << getAge() << std::endl;
}

int main(void)
{
    Dog corgi;
    corgi.printInfo();

    std::cout  << std::endl;

    corgi.setName("fluffy");
    corgi.setBreed(" ウェルッシュ・コーギー");
    corgi.setAge(1);

    corgi.printInfo();

    return 0;
}