//***************************************************
/** 21/1/20
 * P134 list3.4 「人を表すpersonクラス」
 */
//***************************************************

#include <iostream>
#include <stdio.h>
#include <string>

class person
{
    std::string m_name;
    int m_age;

public:
    person();

    void set_name(std::string name);
    void set_age(int age);

    std::string name() const;
    int age() const;
};

//コンストラクタ
// : m_age(-1) メンバー初期化リスト(:以下)を使い、メンバ変数 m_age を -1 で初期化する
person::person() : m_age(-1) ,m_name("no name")
{
    std::cout <<">default age :"<< this->m_age << std::endl;
    std::cout <<">default name :"<< this->m_name << std::endl;
}

void person::set_name(std::string name)
{
    m_name = name;
}

void person::set_age(int age)
{
    m_age = age;
}

std::string person::name() const
{
    return m_name;
}

int person::age() const
{
    return m_age;
}

int main(void)
{
    person person1;

    person1.set_name("pochi");
    person1.set_age(100);
    std::cout << "name : " << person1.name() << std::endl;
    std::cout << "age : " << person1.age() << std::endl;

    return 0;
}