//***************************************************
/** 21/4/15
 * 「添え字演算子のオーバーロード」
 *
 * 参考：https://programming.pc-note.net/cpp/operator.html
 */
//**************************************************

#include <iostream>
#include <string>

class TestClass
{
private:
    int *arr;

public:
    TestClass(int size)
    {
        if (size < 0)
        {
            size = 0;
        }

        arr = new int[size];
    };

    ~TestClass() { delete[] arr; };

    //添字演算子オーバーロード
    //const版
    int const &operator[](int index) const { return arr[index]; };

    //非const版
    int &operator[](int index) { return arr[index]; };
};

void func(TestClass const &c)
{

    // c[0] = 10; //エラー

    for (int i = 0; i < 5; i++)
    {
        std::cout << c[i] << std::endl;
    }
};

int main(void)
{
    TestClass tc(5);
    for (int i = 0; i < 5; i++)
    {
        tc[i] = ++i;
    }

    func(tc);

    return 0;
}

/**
 *
 *
 *
 *
 *
*/