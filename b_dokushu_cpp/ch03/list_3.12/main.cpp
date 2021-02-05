//***************************************************
/** 21/2/1
 * P154 list3.12「基底クラスBaseを派生クラスDerivedが継承する例」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class Base
{
public:
    void foo();
};

void Base::foo()
{
    std::cout << "foo()" << std::endl;
}

//Baseクラスを継承したDerivedクラス
//Baseのメンバーを継承
class Derived : public Base //private だと、foo()にアクセスできない為、エラー
{
public:
    void bar(); //追加したメンバ関数
};

void Derived::bar()
{
    std::cout << "bar()" << std::endl;
}

int main(void)
{
    Base base;
    base.foo();
    // base.bar(); //bar()は派生クラスのメンバ関数の為、エラー

    Derived derived;
    derived.foo();
    derived.bar();

    std::cout << " あいうえお" << std::endl;

    return 0;
}