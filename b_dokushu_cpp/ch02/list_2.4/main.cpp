//***************************************************
/** 21/1/7
 * 共用体(Union)のアドレス
 */
//***************************************************

#include <iostream>

typedef union
{
    int x;
    int y;
    int z;
} U;

int main(void)
{
    U *u;

    //共用体：アドレスが同じ
    std::cout << &u->x << std::endl;
    std::cout << &u->y << std::endl;
    std::cout << &u->z << std::endl;

    return 0;
}