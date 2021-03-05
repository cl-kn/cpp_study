//***************************************************
/**  */
//***************************************************

#include <iostream>

int main(void)
{
    template <typename... Args>
    auto print(Args... xs)
        ->decltype(std::initializer_list<int>{xs...}, std::declval<void>())
    {
        for (auto &&x : {xs...})
        {
            std::cout << x << std::endl;
        }
    }

    print(1, 2, 3, 4, 5);
    return 0;
}