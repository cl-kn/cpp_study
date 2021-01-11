//***************************************************
/** 21/1/8
 * list2.8 参照の使用
 */
//***************************************************

#include <iostream>
#include <stdio.h>

int main(void)
{
    int value = 42;

    std::cout << "value = " << value << std::endl; //42
    std::cout << "value address = " << &value << std::endl;

    int &ref = value; //変数valueへの参照

    std::cout << "ref address = " << &ref << std::endl;
    std::cout << "ref value = " << ref << std::endl; //42

    ref = 2021; //参照変数を利用し、値の更新

    std::cout << "value value = " << value << std::endl; //2021
    std::cout << "ref value = " << ref << std::endl;     //2021

    return 0;
}