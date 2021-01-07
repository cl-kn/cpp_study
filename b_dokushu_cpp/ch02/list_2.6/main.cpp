//***************************************************
/** 21/1/7
 * 列挙型
 */
//***************************************************

#include <iostream>

enum class Category
{
    value1,
    value2,
    value3 = 100,
    value4,
};

int main(void)
{
    Category category = Category::value1; //value1 = 0 で初期化
    // Category category;

    std::cout << static_cast<int>(category) << std::endl;
    // std::cout << category<< std::endl; //コンパイルエラー

    return 0;
}

/**
 * 【構文】
 * enum class enum-name {
 *      enumerator1,
 *      enumerator2 = value,
 *      .....
 * };
 *
 * ※列挙体の整数値の範囲は、CPにより異なる。
 *
 *
 *
*/