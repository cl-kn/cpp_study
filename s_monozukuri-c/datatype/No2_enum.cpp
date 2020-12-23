//***************************************************
/** enum class【C++で導入された新しい列挙型の使い方】
 * https://monozukuri-c.com/langcpp-funclist-enum-class/
 * 12/21 , 12/22*/
//***************************************************

#include <stdio.h>
#include <iostream>

//C++ ：列挙型の定義
enum class E_Dog
{
    Poodle,
    Husky,
    Chihuahua,
    Bulldog,
};

//C ：列挙型定義
#if 1
typedef enum
{
    Apple,
    orange,
    melon,
} E_FRUIT;

#endif

//構造体定義
typedef struct
{
    char jpn[32];
    char eng[32];
} S_DOG;

//構造体からのテーブル
const S_DOG dogTable[] = {
    {"プードル", "Poodle"},
    {"ハスキー", "Husky"},
    {"チワワ", "Chihuahua"},
    {"ブルドッグ", "Bulldog"},
};

int main(void)
{
    //列挙型を使う***************************************
    //「enum class」「::スコープ解決演算子」
    E_Dog dog = E_Dog::Poodle; //C++

    int num[4] = {0};

    //「厳しめの型チェック」***************************************
    //以下はビルドエラー
    // dog = 1;
    // dog = 10;

    //「配列のインデックスとしての利用不可」**************************
    //num[E_Dog::Poodle] = 100;

    //「加減算・インクリ・デクリ不可」
    // dog = dog + 2;
    // dog++;

    //列挙子を整数型へキャストする***************************************
    num[(int)E_Dog::Poodle] = 100;              //(int)でキャスト
    num[static_cast<int>(E_Dog::Poodle)] = 200; //static_castによるキャスト

    E_FRUIT fruit = Apple; //C

    //テーブルデータを参照***************************************
    for (int i = static_cast<int>(E_Dog::Poodle); i <= static_cast<int>(E_Dog::Bulldog); i++)
    {
        std::cout << dogTable[i].jpn << std::endl;
    }

    return 0;
}

/**「列挙型（機能増加版）」
 *
 * enum         スコープ無し列挙型 ：Cとほぼ同じ
 * enum class   スコープ付き列挙型 ：C++で追加された、参照範囲の指定が必要な列挙型
 *
 * 【C++で追加された機能】
 * ➀「::」演算子による、スコープ機能 ※厳しめのデータ型チェック
 * ➁ enum class E_Dog : short のように、型名の後ろに「:（整数型）」を指定し、管理するデータ型を選べる
 * ※指定できる型は、[整数型]のみ
 * ※省略すると、[int型]
 * ※[unsigned]系の型を指定したら、負の値を設定できない
 * ※「enum class」は整数型だが、プリミティブな整数型とは区別される
 *
 * 【列挙子をキャスト】
 * 「static_cast」の利用が推奨
 *
*/