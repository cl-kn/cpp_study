//***************************************************
/** 21/3/4
 * 練習問題5.1
 * 配列のアクセスに関する問題
 */
//***************************************************

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

// void swap(int *x, int *y)
// {
//     int z = 0;
//     *x = *y;
//     *y = z;
// }

void reverse(int *array, int arrNum)
{
    // for (int i = arrNum; arrNum < 0; i--)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         swap(array[i] = array[j]);
    //     }
    // }

    for (int i = 0; i < arrNum / 2; i++)
    {
        int tmp = array[i];
        array[i] = array[arrNum - i - 1];
        array[arrNum - i - 1] = tmp;
    }
}

void print(int x)
{
    std::cout << x << " ";
}

int main(void)
{
    int array[] = {0, 1, 2, 3, 4};

    for (int e : array)
    {
        std::cout << e << std::endl;
    }

    reverse(array, 5);

    std::cout << "-------- reverse -------" << std::endl;

    for (int e : array)
    {
        std::cout << e << std::endl;
    }

    std::cout << std::endl;

    //コンテナ
    {
        std::vector<int> v = {1, 2, 3};

        decltype(v)::iterator first = std::begin(v);
        decltype(v)::iterator last = std::end(v);

        std::for_each(first, last, print);
    }
    std::cout << std::endl;

    //組み込み配列
    {
        int ar[] = {4, 5, 6, 7, 8, 9, 10};

        int *first = std::begin(ar);
        int *last = std::end(ar);

        std::for_each(first, last, print);
    }

    return 0;
}

/**
 * 問題１：既知のプログラムに、配列を逆順で出力するreverse()関数を定義
 *
 * 問題２：
 *
 * 問題３：拡張for文、等を使わずにポインタを使用して要素を出力する
 *
*/