//***************************************************
/** 12/24 */
//***************************************************

#include <iostream>

char *p = "test";

void foo()
{
    std::cout << "foo()." << std::endl;
}

int main(void)
{
    std::cout << "p    =" << (void *)p << std::endl;
    std::cout << "&foo =" << &foo << std::endl;

    *p = 'b';
    foo();

    return 0;
}