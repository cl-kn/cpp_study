//***************************************************
/** 21/3/9
 * P266 「整数の動的確保」
 */
//***************************************************

#include <iostream>

int main(void)
{
    int *p = new int(42); //ポインタ変数pを動的確保

    std::cout << "test..." << *p << std::endl;

    delete p;

    return 0;
}