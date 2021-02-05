//***************************************************
/** 21/1/27
 * P147 list3.8 「＝を使ったコンストラクタ呼び出し」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class A
{
    int m_v;

public:
    A(int); // コンスト宣言
    int get_v() const;
};

A::A(int x) : m_v(x)
{
}

int A::get_v() const
{
    return m_v;
}

int main(void)
{
    A x = 44; //A::A(int) のコンストラクタ呼び出しをしている

    if (x.get_v() == 42)
    {
        std::cout << "A.get_v() ... 42" << std::endl;
    }
    else
    {
        std::cout << "error" << std::endl;
    }

    return 0;
}