//***************************************************
/** 21/4/15
 * 「比較演算子のオーバーロード」
 *
 * 参考：https://programming.pc-note.net/cpp/operator.html
 */
//***************************************************

#include <iostream>
#include <string>

class TestClass
{
private:
    int num;

public:
    TestClass(int n = 0) : num{n} {};

    // == 演算子をオーバーロード
    bool operator==(const TestClass &r) const
    {
        return num == r.num;
    };

    //!=演算子をオーバーロード
    bool operator!=(const TestClass &r) const
    {
        return !(*this == r);
    };

    // < 演算子をオーバーロード
    bool operator<(const TestClass &r) const
    {
        return num < r.num;
    };
};

int main(void)
{
    TestClass tc1(10);
    TestClass tc2(10);
    TestClass tc3(20);

    std::cout << ((tc1 == tc3) ? "true" : "false") << std::endl;
    std::cout << ((tc1 != tc2) ? "true" : "false") << std::endl;
    std::cout << ((tc1 < tc3) ? "true" : "false") << std::endl;

    return 0;
}