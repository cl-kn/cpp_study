//***************************************************
/** 21/3/4
 * P252「配列のポインタと参照」
 */
//***************************************************

#include <iostream>

int main(void)
{
    int array[] = {1, 2, 3, 4, 5};

    int(*ptr)[5] = &array;

    *ptr[0] = 2021; //OK

    for (int e : *ptr)
    {
        std::cout << e << std::endl;
    }

    std::cout << std::endl;

    int(&ref)[5] = array;

    for (int e : ref)
    {
        std::cout << e << std::endl;
    }

    return 0;
}