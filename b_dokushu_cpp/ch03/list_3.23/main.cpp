//***************************************************
/** 21/2/16
 * P181 「private な staticメンバ変数の利用例」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class S
{
    static int count;

public:
    S();
    ~S();

    void show_count() const;
};

int S::count = 0;

S::S() //インスタンス生成時に count 変数をインクリする
{
    ++count;
}

S::~S() //インスタンス破棄時に count 変数をデクリする
{
    --count;
}

void S::show_count() const
{
    std::cout << "S::count = " << count << std::endl;
}

void function()
{
    S a;
    a.show_count();
}

int main(void)
{
    S s_a;
    s_a.show_count();

    function();

    s_a.show_count();

    return 0;
}