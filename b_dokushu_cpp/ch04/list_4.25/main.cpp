//***************************************************
/** 21/2/26
 * P239 「関数形式マクロ」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

void hello()
{
    std::cout << "hello, macro" << std::endl;
}

#define id(name) name

int main(void)
{
    id(hello)(); //関数形式マクロにより、 id(hello) ▶hello に置換される
    return 0;
}