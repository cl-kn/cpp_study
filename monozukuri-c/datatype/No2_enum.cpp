//***************************************************
/** enum class【C++で導入された新しい列挙型の使い方】
 * https://monozukuri-c.com/langcpp-funclist-enum-class/
 * 12/21 */
//***************************************************

#include <stdio.h>

//C++ での列挙型の定義
enum class E_Dog
{
    Poodle,
    Shiba,
    Chihuahua,
    Bulldog,
};

int main(void)
{
    //列挙型を使う
    //「enum class」
    E_Dog dog = E_Dog::Poodle;

    return 0;
}

/**「列挙型（機能増加版）」
 *
 * enum         スコープ無し列挙型 ：Cとほぼ同じ
 * enum class   スコープ付き列挙型 ：C++で追加された、参照範囲の指定が必要な列挙型
 *
 *
*/