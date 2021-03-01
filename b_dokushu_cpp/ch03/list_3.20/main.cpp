//***************************************************
/** 21/2/15
 * P174 「無名共用体」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class A
{
    union //無名共用体 デフォアクセス指定子: public
    {
        int i;
        float f;
    };

    long l; //↑無名共用体の範囲外の変数

public:
    A();

    int get_i() const;
    void set_f(float f);
    long get_l() const;
};

A::A() : i(0xdeadbeef), l(0xc0ffee)
{
    std::cout << "&f: " << &f << std::endl
              << "&i: " << &i << std::endl
              << "&l: " << &l << std::endl;
}

int A::get_i() const
{
    return i;
}

void A::set_f(float f)
{
    this->f = f;
}

long A::get_l() const
{
    return l;
}

int main(void)
{
    A a;
    std::cout << "i" << std::endl;
    return 0;
}

/**
 * 「無名共用体」
 * ・型名がない、無名の共用体
 * ・共用体のインスタンスまでは不要だが、いくつかの変数が同メモリ上に配置されている、ということだけを指定したい場合に使う。
 * 
 * 
*/