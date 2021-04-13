//***************************************************
/** 21/4/13
 * 「ムーブコンストラクター」の使用
*/
//***************************************************

#include <iostream>
#include <string>
#include <utility>

class Person
{
private:
    std::string m_name;
    int m_age;
    Person(int age) : m_age{age} {}

public:
    //constructor
    Person() : Person{-1} {}
    Person(std::string name, int age) : m_name{name}, m_age{age} {}

    Person(Person &&other); //move constractor

    //name, age を返す関数
    const std::string &name() const { return m_name; }
    int age() const { return m_age; }
};

//move constractor
Person::Person(Person &&other) : m_name{other.m_name}, m_age{other.m_age}
{
    std::cout << "[move constractor] call" << std::endl;
}

int main(void)
{
    Person alice{"alice", 15};

    //move constractor で初期化
    Person move{std::move(alice)};

    std::cout << move.name() << std::endl;
    std::cout << move.age() << std::endl;

    return 0;
}