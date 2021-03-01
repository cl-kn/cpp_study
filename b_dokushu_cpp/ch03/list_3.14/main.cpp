//***************************************************
/** 21/2/5
 * P161 list3.14 「名前の隠蔽とusing宣言」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

//基底クラス
class Base
{
    void private_foo();

public:
    void foo();
};

void Base::foo()
{
    std::cout << "Base::foo()" << std::endl;
}

void Base::private_foo()
{
    std::cout << "Base::private_foo()" << std::endl;
}

//派生クラス
class Extends_Base : public Base
{
public:
    using Base::foo; //基底クラスを使うために using 宣言
    // using Base::private_foo; //using はアクセス指定子の影響を受ける為、エラー
    void foo(int x); //オーバーロード
};

void Extends_Base::foo(int x)
{
    std::cout << "Extends_Base::foo(" << x << ")" << std::endl;
}

int main(void)
{
    Base base;
    base.foo(); //Base::foo()

    std::cout << "-----------------------" << std::endl;
    Extends_Base e_base;
    e_base.foo();   //Base::foo()
    e_base.foo(11); //Extends_Base::foo(11)

    return 0;
}

/**
 * 「using宣言」
 * 基底クラスのメンバ関数を派生クラスでオーバーロードした場合、
 * 派生クラスからは、「名前隠蔽」機能により、呼べなくなる。
 * 
 * その為、派生クラスで using を使うことにより、呼べるようにする。
 * ※using宣言は、アクセス指定子の影響を受ける
 * 【例】
 *  基底クラスBase の メンバ関数、 private_foo() が private指定だった場合、
 * 派生クラスで using を使用しても、コンパイルエラーとなる。 
 * 
*/