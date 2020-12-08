/** クラス【オブジェクト指向を最初に学ぶためのイメージ】
 * site https://monozukuri-c.com/langcpp-class-image/
 * date 12/08
 *
*/

#include <stdio.h>

//C++、クラスの型定義
class POS //任意の型（クラス）名
{
public:       //アクセス指定子
    double x; //メンバ変数
    double y; //クラスが管理するデータ

    void print(); //関数のプロトタイプ宣言
};

//座標表示関数の定義(メンバ関数 or メソッド)
// 「クラス名::関数名」 の形式で記述
void POS::print()
{
    printf("x:%lf y:%lf\n", x, y);
}

int main()
{
    POS pos; //クラスの変数定義
    POS pos2;

    pos.x = 100.0;
    pos.y = 200.0;

    pos2.x = 10.0;
    pos2.y = 40.0;

    // printf("x:%lf y:%lf\n", pos.x, pos.y);
    pos.print();  //posオブジェクトへの関数の呼び出し 「クラス変数名.メンバ関数名()」
    pos2.print(); //pos2オブジェクトへの関数の呼び出し

    return 0;
}

//C言語、構造体の型定義
// typedef struct
// {
//     double x;
//     double y;
// } POS;

// int main()
// {
//     POS pos;//構造体の変数定義
//     pos.x = 100.0;
//     pos.y = 200.0;

//     printf("x:%lf y:%lf\n", pos.x, pos.y);

//     return 0;
// }

/**
 * C言語：「型」の言語であり、C++も同様なので、
 * 構造体を拡張した「クラス」は、「型」である。
 *
 * クラスの変数定義＝プログラムで情報を扱うために、「型」を元にメモリ上に実体を作り出す
 * 作成された変数は、メモリ上に実体が存在する
 * POS pos; ←pos変数
 *※※メモリ上に確保されたクラス型データの実体を「オブジェクト（インスタンス）」と呼ぶ※※
 *
 * 「::」 スコープ解決演算子
 * ・オブジェクトによって振る舞いが変化＝＝OOPの特徴
 *
*/