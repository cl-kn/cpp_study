//***************************************************
/** 21/1/13
 * P105 「関数オーバーロード①」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

void show_value(int x)
{
    std::cout << x << std::endl;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

int sum(int a, int b, int c)
{
    int d = a + b + c;
    return d;
}

int main(void)
{
    int x = sum(1, 2);
    show_value(x);

    return 0;
}