//***************************************************
/** 21/2/25
 * list4.17「名前空間で区切られた関数と構造体」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

namespace A //名前空間A
{
    struct S
    {
        int a;
    };

    void foo()
    {
        std::cout << "A::foo()" << std::endl;
    }
}

namespace B //名前空間B
{
    struct S
    {
        int b;
    };
    void foo()
    {
        std::cout << "B::foo()" << std::endl;
    }
}

//ネストした名前空間
namespace library
{
    namespace modle
    {
        namespace detail
        {
            void internal_function();
        }
    }
}

//ネストした名前空間 の、省略記法
namespace library2::modle2::detail2
{

}

//namespace の別名定義
namespace xyz
{
    int plus(int a, int b)
    {
        return a + b;
    }
}

namespace a
{
    namespace b
    {
        namespace c
        {
            int minus(int a, int b)
            {
                return a - b;
            }
        }
    }
}

//namespace のエイリアス設定
namespace x = xyz;
namespace abc = a::b::c;

int main(void)
{
    A::foo();
    B::foo();

    std::cout << "x::plus(1,2) = " << x::plus(1, 2) << std::endl;
    std::cout << "abc::minus(10,5) = " << abc::minus(10, 5) << std::endl;

    return 0;
}