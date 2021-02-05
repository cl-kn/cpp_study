//***************************************************
/** 21/1/18 1/25(再)
 * list3.6 「名前と年齢を使って、初期化できるようにしたpersonクラス」
 * 委譲コンストラクター
 */
//***************************************************

#include <iostream>
#include <stdio.h>
#include <string>

class person
{
    std::string m_name;
    int m_age;

    person(int age); //引数ありコンストラクタ

public:
    person();                          //コンストラクタ
    person(std::string name, int age); //引数ありコンストラクタ

    void set_name(std::string name); //setter:name
    void set_age(int age);           //setter:age

    std::string name() const; //return name
    int age() const;          //return age
};

//コンストラクタ********************
//共通な初期化処理が書かれたコンストラクタ
person::person(int age) : m_age(age), m_name("no name")
{
    //「複数のコンストラクタで共通な大本の処理」をprivateなコンストラクタに用意し、
    //移譲コンストラクタを使うことで、一貫した初期化手順を提供する
    std::cout << "Common Constructor" << std::endl;
}

//委譲元コンストラクタ(引数なし)
person::person()
    : person(-1) //移譲先コンストラクタ
{
    std::cout << "No-Arg Constructors" << std::endl; //？？
}

//委譲元コンストラクタ(名前と年齢を与えて初期化する)
person::person(std::string name, int age)
    : person(age) //委譲先コンストラクタ
{
    std::cout << "Arg Constructors" << std::endl;

    //初期化中にメンバ関数呼び出しも可能
    set_name(name);
}
//*****************************************

//名前・年齢をセットする関数***************
void person::set_name(std::string name)
{
    m_name = name;
}

void person::set_age(int age)
{
    m_age = age;
}
//*****************************************

//名前・年齢を返す関数*********************
std::string person::name() const
{
    return m_name;
}

int person::age() const
{
    return m_age;
}
//*****************************************

int main(void)
{
    person person1("pochi", 1);
    std::cout << person1.name() << std::endl;

    return 0;
}

/**
 * 委譲コンストラクタ：delegating constructor
 * 委譲先（ターゲット）コンストラクタ：target constructor
 * 
 * 
 * 
 * 
*/