//***************************************************
/** 21/2/9
 * 練習問題3.6
 */
//***************************************************

#include <iostream>
#include <stdio.h>
#include <string>

class Animal
{
    std::string name = "no name";
    int age = -1;

public:
    void set_name(std::string name);
    void set_age(int age);

    std::string get_name();
    int get_age();
};

void Animal::set_name(std::string name)
{
    this->name = name;
    // name = name; //引数に引数を代入するような感じ
}

void Animal::set_age(int age)
{
    this->age = age;
    // age = age;
}

std::string Animal::get_name()
{
    return name;
}

int Animal::get_age()
{
    return age;
}

int main(void)
{
    Animal animal;
    animal.set_name("corgi");
    animal.set_age(2);

    std::cout << animal.get_name() << std::endl;
    std::cout << animal.get_age() << std::endl;

    return 0;
}

/**
 * 問１
 *  thisポインタが必要になるときは？
 *  ▶"メンバ変数を参照したい場合！！"
 * 問２
 *  thisポインタが必要になるようなクラス・メンバ関数を作り、thisポインタを使ったときとそれ以外での結果を確認する
 * 問３
 *  thisポインタが指す先のオブジェクトを変更できないのはどんなときか
 *  ▶constメンバ関数内で使われるとき
*/