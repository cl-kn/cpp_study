//***************************************************
/** 21/4/15
 * 「前置・後置 のオーバーロード」
 *
 * 参考：https://programming.pc-note.net/cpp/operator.html
 */
//**************************************************

#include <iostream>
#include <string>

class TestClass
{
private:
    int num;

public:
    //前置インクリ・デクリ
    TestClass operator++()
    {
        ++num;
        return *this;
    };

    TestClass operator--()
    {
        --num;
        return *this;
    };

    //後置インクリ・デクリ
    TestClass operator++(int)
    {
        TestClass tc = *this;
        ++(*this);
        return tc;
    };

    TestClass operator--(int)
    {
        TestClass tc = *this;
        --(*this);
        return tc;
    };
};

int main(void)
{

    return 0;
}

/**
 * 「前置インクリ・デクリ」
 * ・
 *
 *
 * 「後置インクリ・デクリ」
 * ・値を返した後に増減処理を行う
 * ・増減処理は、「*this」自分自身に対し、前置インクリ・デクリを適用
 *
 *
 * ・見分けを付けるために、引数に (int) を付ける。
 * ※関数の処理内ではこの引数は使用しない
 *
 *
 *
 *
 *
 *
 *
 *
*/