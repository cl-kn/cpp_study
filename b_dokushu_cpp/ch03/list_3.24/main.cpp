//***************************************************
/** 21/2/17
 * P181 「private な static メンバ変数の利用例」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class S
{
private:
    static int count;

public:
    S();
    ~S();

    static void show_count(); //staticメンバ関数の宣言
};

int S::count = 0;
S::S()
{
    ++count;
}

S::~S()
{
    --count;
}

void S::show_count()
{
    std::cout << "S::count" << count << std::endl;
}

int main(void)
{
    S::show_count(); //インスタンス無しで呼べる

    S a;
    a.show_count(); //インスタンス生成でも呼べる

    return 0;
}