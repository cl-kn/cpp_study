//***************************************************
/** 0104
 * 第8回目 関数とC++の４大メモリその１ スタック
 * https://theolizer.com/cpp-school1/cpp-school1-8/
*/
//***************************************************

#include <iostream>

void foo(char const *from)
{
    std::cout << "foo() called from " << from << std::endl;
}

void bar()
{
    foo("bar()");
    std::cout << "in bar()" << std::endl;
}

int main(void)
{
    foo("main()");
    std::cout << "in main()" << std::endl;

    bar();

    return 0;
}