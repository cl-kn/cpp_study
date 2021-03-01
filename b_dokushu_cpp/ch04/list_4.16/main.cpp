//***************************************************
/** 21/2/23
 * P217「宣言のみのメンバー関数のインライン化」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class A
{
private:
    int i;

public:
    inline A(); //コンストラクタをインライン指定付きで宣言
    int x;

    void set_i(int i) //メンバ関数内での関数定義は、自動的にインライン指定となる
    {
        this->i = i;
    }

    void show() const; //宣言のみなので、インライン指定とならない
};

A::A() : i(0) {} //定義には inline 指定は不要

void A::show() const
{
    std::cout << "i = " << i << std::endl;
}

int main(void)
{
    A a;
    a.show();
    a.set_i(2021);
    a.show();

    // a.x = 0;
    // std::cout << a.x << std::endl;

    return 0;
}