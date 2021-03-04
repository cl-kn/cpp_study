//***************************************************
/** 21/3/4
 *
 * 「プリプロセッサーを使ったプログラム条件分岐」
 */
//***************************************************

#include <iostream>
#include <stdio.h>
#include <string>
#define CORGI
#define DOG

class Animal
{
private:
    int age;
    std::string name;

public:
    std::string color;

    Animal();
    ~Animal();

    void setName(std::string name);
    void setColor(std::string color);
    void setAge(int age);

    void getPrint();
};

Animal::Animal()
{
    this->age = 0;
    this->name = "no name";
    std::cout << "[const]" << std::endl;
}

Animal::~Animal()
{
    std::cout << "[dest]" << std::endl;
}

void Animal::setName(std::string name)
{
    this->name = name;
}

void Animal::setColor(std::string color)
{
    this->color = color;
}

void Animal::setAge(int age)
{
    this->age = age;
}

void Animal::getPrint()
{
    std::cout << "Animal info" << std::endl;
    std::cout << "NAME : " << name << std::endl;
    std::cout << "AGE : " << age << std::endl;
    std::cout << "COLOR : " << color << std::endl;
}

int main(void)
{
    Animal corgi;
    corgi.setAge(13);
    corgi.setName("Harry");
    corgi.setColor("white & brown");

    corgi.getPrint();

//マクロ定義による条件分岐
#if defined(CORGI)
    std::cout << "define CORGI true" << std::endl;
#else
    std::cout << "define false" << std::endl;
#endif
    return 0;
}
