//***************************************************
/** 1/5
 * P49 「char型からint型への型変換」
 */
//***************************************************

#include <iostream>

int main(void)
{
    char c = 99;
    std::cout << "char c = " << c << std::endl;                                //c
    std::cout << "static_cast<int>(c) = " << static_cast<int>(c) << std::endl; //99

    /*
    std::cout は char型の変数を整数ではなく「文字」として扱うため、
    数値の99ではなく、99に対応した文字が出力される。

    【キャスト演算子】
    【構文】static_cast<target-type>(expression)

    char型変数を単純に数値として扱うだけの時に、新たに整数型の変数を作成せずに済む

    */

    return 0;
}