//***************************************************
/** 21/3/4
 * P249「先頭以外の要素へのアクセス」
 *
*/
//***************************************************

#include <iostream>

int add(int x, int y);

int add(int x, int y)
{
    return x + y;
}

int main(void)
{
    int array[] = {0, 1, 2, 3, 4, 5};

    int *ptr = array;

    std::cout << array[0] << std::endl; //array[0] へのアクセス

    // std::cout << add(array) << std::endl;

    return 0;
}