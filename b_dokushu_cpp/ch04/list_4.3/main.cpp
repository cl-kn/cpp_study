//***************************************************
/** 21/2/18
 * P196 「関数スコープ」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class A
{
public:
    ~A()
    {
        std::cout << ">>destructor" << std::endl;
    };
};

void function_scope(int i)
{
    A a; //関数スコープから抜けると、デストラクタが呼ばれる

    std::cout << "function scope" << std::endl;

    if (i > 0)
    {
        return; //関数の処理がここから呼び出し元に移る
    }

    std::cout << "after [if statement]" << std::endl;
}

int main(void)
{
    function_scope(1);

    std::cout << std::endl;

    function_scope(-1);
    return 0;
}