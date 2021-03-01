//***************************************************
/** 21/2/16
 * P180 「staticなメンバ変数の宣言・初期化・呼び出し」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class S
{
public:
    static int s_num; //staticメンバ変数の宣言
};

int S::s_num = 100;

int main(void)
{
    std::cout << S::s_num << std::endl;

    S::s_num = 200;

    S s;

    std::cout << s.s_num << std::endl;

    s.s_num = 555;

    std::cout << s.s_num << std::endl;


    return 0;
}