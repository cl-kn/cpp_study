//***************************************************
/** 21/2/4
 * P157 list3.13「オーバーライドの例（仮想関数）」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class Base //基底クラス
{
public:
    virtual void foo();
};

void Base::foo()
{
    std::cout << "Base::foo()" << std::endl;
}

class Derived : public Base //派生クラス
{
public:
    void foo() override; //基底クラスのメンバ関数をオーバーライド
    void foo(int x);     //ただのオーバーライド
};

void Derived::foo()
{
    std::cout << "Derived::foo() override" << std::endl;
}

void Derived::foo(int x)
{
    std::cout << "Derived::foo(int) --" << x << "--" << std::endl;
}

int main(void)
{
    Base b1;
    b1.foo();

    Derived d1;
    d1.foo();
    d1.foo(2021);

    return 0;
}

/**
 * 「仮想関数」
 * 基底クラスの関数を、派生クラスで内容を変更して使いたい時に、基底クラスで宣言する
 * 「virtual」指定子
 * 
 * 
 * 
*/