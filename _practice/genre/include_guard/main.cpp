//***************************************************
/** 21/3/4
 * インクルードガードの練習
 * 21/3/8 C++では、「pragma」を使用する
 */
//***************************************************

#include <iostream>
#include "test.hpp"
// #include "test.hpp" // test.hpp 内でインクルードガードされていない場合、クラス多重定義エラー
// #include "calc.cpp"

int main(void)
{
    Calc calc1;

    std::cout << "calc1.add(1,2) = " << calc1.addInt(1, 2) << std::endl;
    std::cout << "calc1.minusInt(6,3) = " << calc1.minusInt(6, 3) << std::endl;
    std::cout << "calc1.kakeInt(6,3) = " << calc1.kakeInt(6, 3) << std::endl;
    std::cout << "calc1.waruInt(5,0) = " << calc1.waruInt(5, 0) << std::endl;
    std::cout << "calc1.waruInt(10,2) = " << calc1.waruInt(10, 2) << std::endl;

    return 0;
}