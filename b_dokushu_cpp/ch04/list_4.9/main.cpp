//***************************************************
/** 21/2/19
 * P205「条件分と関数呼び出し」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

int foo(int value)
{
    //～複雑な処理
    std::cout << "foo: " << value << std::endl;
    return value;
}

//偶数の時 true を返す
bool is_even(int value)
{
    return value % 2 == 0;
}

bool is_zero(int value)
{
    return value == 0;
}

int main(void)
{
    //初期化構文付き if文
    //複雑な処理の foo() 呼び出しが1回で済む
    if (int result = foo(42); is_even(result) && !is_zero(result))
    {
        std::cout << "foo(42) return [even number] " << std::endl;
    }

    return 0;
}