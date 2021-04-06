//***************************************************
/** 21/4/6
 *「P278 グローバル変数を参照で返す」
 */
//***************************************************

#include <iostream>
#include <string>

int x;

//参照を返す関数
int &get_x()
{
    return x;
}

int main(void)
{
    x = 10;
    int &y = get_x(); // 戻り値の参照を、参照型変数に渡す

    std::cout << y << std::endl; //10

    y = 100; //ここで値が変更

    std::cout << "y = " << y << std::endl; //100

    return 0;
}