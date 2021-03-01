//***************************************************
/** 21/3/1
 * 「配列の暗黙変換」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

int main(void)
{
    int array[] = {0, 1, 2, 3};

    std::cout << "first address : " << &array[0] << std::endl;

    int *ptr = array;

    std::cout << "pointer" << ptr << std::endl;
    std::cout << "value : " << *ptr << std::endl;

    return 0;
}