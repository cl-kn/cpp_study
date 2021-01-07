//***************************************************
/** 21/1/7
 * 構造体(Struct)のアドレス
 */
//***************************************************

#include <iostream>

typedef struct
{
    int x;
    int y;
    int z;
} S;

int main(void)
{
    S *s;

    //構造体：アドレスは別々
    std::cout << &s->x << std::endl;
    std::cout << &s->y << std::endl;
    std::cout << &s->z << std::endl;

    return 0;
}