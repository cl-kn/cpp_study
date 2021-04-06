//***************************************************
/** 21/4/6
 * 「関数ポインターの宣言と指し示す関数の呼び出し」
 */
//***************************************************

#include <iostream>
#include <string>

int identity(int v)
{
    return v;
}

int square(int v)
{
    return v * v;
}

int main(void)
{
    //関数ポインターを宣言し、identity() で初期化
    // func ←関数ポインタ名
    int (*func)(int) = &identity;

    //関数ポインターを経由して identity() を呼び出す
    std::cout << "func(4) : " << func(4) << std::endl;

    //関数ポインターに square() のアドレスを代入する
    func = &square;

    //関数ポインターを経由して square()を呼び出す
    std::cout << "func(4) : " << func(4) << std::endl;

    return 0;
}

/**
 * 「関数ポインター」
 * return-type (*variable-name)(parameters......) = &function-name;
 *
 * ※（）の範囲や、 * の位置に注意する
 *
*/