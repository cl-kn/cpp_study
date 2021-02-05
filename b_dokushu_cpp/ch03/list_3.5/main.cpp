//***************************************************
/** 21/1/21
 * P137 list3.5 「Personクラスにデストラクターを追加」
 */
//***************************************************

#include <iostream>
#include <stdio.h>
#include <string>

class Person
{
    std::string m_name;
    int m_age;

public:
    Person();  //コンスト
    ~Person(); //デスト

    void set_name(std::string name);
    void set_age(int age);

    std::string get_name() const;
    int get_age() const;
};

//コンスト
Person::Person() : m_age(-1)
{
    std::cout << ">constructor" << std::endl;
}

//デスト
Person::~Person()
{
    std::cout << ">destructor" << std::endl;
};

//setter [name]
void Person::set_name(std::string name)
{
    m_name = name;
}

//setter [age]
void Person::set_age(int age)
{
    m_age = age;
}

//getter [name]
std::string Person::get_name() const
{
    return m_name;
}

//getter[age]
int Person::get_age() const
{
    return m_age;
}

int main(void)
{
    Person p1;

    p1.set_name("pochi");
    p1.set_age(4);

    std::cout << p1.get_name() << std::endl;
    std::cout << p1.get_age() << std::endl;
    std::cout << ">main()" << std::endl;

    //main()の後に destructor() が実行

    return 0;
}