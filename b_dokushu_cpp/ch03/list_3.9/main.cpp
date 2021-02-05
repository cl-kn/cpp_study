//***************************************************
/** 21/1/27
 * P149 list3.9 「explicit指定子を使い、＝ を禁止する」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class A
{
    int m_v;

public:
    explicit A(int); // コンスト宣言
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
    // A x = 44; // explicit によりエラー

    A y(11);

    if (y.get_v() == 11) {
        std::cout << "true" << std::endl;
    }

    return 0;
}