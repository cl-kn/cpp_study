//***************************************************
/** 21/4/6
 * P302 章の理解度チェック
 */
//***************************************************

#include <iostream>
#include <string>

//**************************************************************
//① allocate() int型の配列を動的確保し、アドレスを返す

//② clear() int型の参照を受け取り、0でクリア

//③ 参照を受け取る関数、右辺値参照を受け取る関数をオーバーロードし、呼び分ける

//④ enumerate() の追加
//**************************************************************

void show(int v)
{
    std::cout << v << std::endl;
}

//① allocate()
int *allocate(int n)
{
    return new int[n];
    {
    }
}

//②
void clear(int &variable)
{
    variable = 0;
}

//③
void show(int &value)
{
    std::cout << "参照" << std::endl;
}

void show(int &&value)
{
    std::cout << "右辺値参照" << std::endl;
}

void enumerate(int *first, int *last, void (*func)(int))
{
    for (; first != last; ++first)
    {
        func(*first);
    }
}

int main(void)
{
    int array[] = {1, 2, 3, 5, 7, 11, 13};

    std::size_t length = sizeof(array) / sizeof(array[0]);
    enumerate(array, array + length, show);

    int i = 0;
    show(i);            //参照
    show(std::move(i)); //右辺値参照

    return 0;
}