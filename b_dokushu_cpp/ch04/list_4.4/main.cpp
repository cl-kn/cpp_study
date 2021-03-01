//***************************************************
/** 21/2/18
 * P198 「その他のスコープ」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class A
{
public:
    ~A()
    {
        std::cout << ">>destructor" << std::endl;
    };
};

int main(void)
{
    // if文のスコープ
    if (true)
    {
        std::cout << "scope [if]" << std::endl;
        A a;
    }

    std::cout << std::endl;

    //for文のスコープ
    for (int i = 0; i < 3; i++)
    {
        std::cout << "scope [for] i =  " << i << std::endl;
        A a;
    }

    std::cout << std::endl;

    //ブレーズ{} だけのスコープ
    {
        std::cout << "scope {}" << std::endl;
        A a;
    }

    std::cout << ">>main() end!!" << std::endl;

    return 0;
}