//***************************************************
/** 21/3/4
 * 練習問題5.1
 * 配列のアクセスに関する問題
 */
//***************************************************

#include <iostream>

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