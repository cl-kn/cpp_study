//***************************************************
/** 21/4/13
 * 「参照と右辺値参照のオーバーロード」
*/
//***************************************************

#include <iostream>
#include <string>

//参照
void show(int &x)
{
    std::cout << "reference : " << x << std::endl;
}

//右辺値参照
void show(int &&x)
{
    std::cout << "rvalue reference : " << x << std::endl;
}

void f() {}

int main(void)
{
    int x = 101;

    show(x);  //変数は左辺値：参照のshow()が呼ばれる
    show(42); //数値は右辺値：右辺値参照のshow() 〃

    return 0;
}