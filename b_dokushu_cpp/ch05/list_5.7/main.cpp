//***************************************************
/** 21/3/8
 *
 * P259「動的配列」
 *
*/
//***************************************************

#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> empty;                                      //空の動的配列
    std::cout << "empty.size() = " << empty.size() << std::endl; //0

    std::vector<int> array = {10, 20, 30, 40, 50};
    std::cout << "array.size() = " << array.size() << std::endl; // 5

    for (int e : array)
    {
        std::cout << e << std::endl;
    }

    return 0;
}

/**
 * std::vector<int> empty;
 * ・int型の「std::vector」 による empty変数の生成
 * ・<> は、「テンプレート引数」と呼ばれ
 *
 * size()
 * ・配列の要素数を返す
 *
 *
*/