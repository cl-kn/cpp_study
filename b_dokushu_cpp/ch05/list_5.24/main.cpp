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
    //constructor*******************************************
    Person() : Person{-1} {}
    Person(std::string name, int age) : m_name{name}, m_age{age} {}

    //move constractor**************************************
    Person(Person &&other) : m_name{other.m_name}, m_age{other.m_age}
    {
        std::cout << "[move constractor] call" << std::endl;
    }

    //getter************************************************
    //name, age を返す関数
    const std::string &get_name() const { return m_name; }
    int get_age() const { return m_age; }
};

int main(void)
{
    Person alice{"alice", 15};

    //move constractor で初期化
    Person move{std::move(alice)};
    // Person move{alice}; //aliceは左辺値の為、このままではエラー

    std::cout << move.get_name() << std::endl;
    std::cout << move.get_age() << std::endl;

    return 0;
}

/**
 * 「ムーブコンストラクター」
 *
 * #include <utility>
 * std::move()
 * ・左辺値を右辺値として扱えるようにするヘルパー関数


*/