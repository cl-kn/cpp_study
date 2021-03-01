//***************************************************
/** 21/2/22
 * P212「extern変数」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

int value = 42; //変数の実体の宣言

void show_extern_variable()
{
    std::cout << "show_extern_variable() : extern variable address : " << &value << std::endl;
    std::cout << "show_extern_variable() : value of extern variable : " << value << std::endl;
};