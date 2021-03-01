//***************************************************
/** 21/2/22
 * P212「extern変数」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

extern int value; //extern変数”宣言”

void show_extern_variable();

int main(void)
{
    std::cout << "main() : extern variable address : " << &value << std::endl;
    std::cout << "main() : value of extern variable : " << value << std::endl;

    value = 0;

    show_extern_variable();

    return 0;
}

/**
 * 「extern宣言」
 * ・コンパイラに、別ファイルで変数が定義されていることを宣言する
 * ・”宣言”なので、変数はメモリ上に実体化されない
 * 
 * 
 * 
*/