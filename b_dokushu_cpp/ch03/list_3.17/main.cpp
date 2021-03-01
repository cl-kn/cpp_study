//***************************************************
/** 21/2/9
 * P167 list 3.17「thisポインタを使ったメンバアクセス」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class A
{
    int value;

public:
    void set_value(int value);
    int get_value() const;
};

void A::set_value(int value)
{
    this->value = value; //メンバ変数の value に引数値を代入
}

int A::get_value() const
{
    return value;
}

int main(void)
{
    A a;
    a.set_value(315);
    std::cout << a.get_value() << std::endl;

    return 0;
}

/**
 * 「thisポインター」
 * このポインタには、メンバ関数呼び出しに使われたオブジェクトを指し示すポインタが格納されている
 * 
 * ※仮引数と同名のメンバ変数は、メンバ関数がクラス内のメンバ変数を直接参照するときなどには、仮引数の変数が優先的に呼ばれる？
 * 
*/