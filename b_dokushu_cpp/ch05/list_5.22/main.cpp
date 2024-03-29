//***************************************************
/** 21/4/13
 * P285「右辺値参照～」
 * 「１への参照を持つ右辺値参照に、０を代入するとどうなるのか？」
*/
//***************************************************

#include <iostream>
#include <string>

int main(void)
{
    int &&i = 1; //１への右辺値参照
    i = 0;       //OK、iは左辺値

    if (1 == 0)
    {
        std::cout << "[i == 0] is true" << std::endl;
    }
    else
    {
        std::cout << "[i == 0] is false" << std::endl;
    }

    return 0;
}