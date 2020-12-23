//***************************************************
/** 演算子オーバーロード【演算子をカスタマイズするメリット】
 * https://monozukuri-c.com/langcpp-operator-overload/
 * 12/21
 */
//***************************************************

#include <stdio.h>

int main(void)
{
    return 0;
}

/**「演算子のオーバーロード」
 *
 * ・演算子のオーバーロードは、独自のクラスに対する拡張
 * ・C++はユーザー側に様々な機能を提供しており、これも視野性を向上する機能の一つ
 *
 * 「使い方」
 * ・クラスでメンバ関数として定義する
 * 「operator」キーワードを利用
 *
 * type operator operator-symbol(parameter-list)
 *
 * type ：この演算子が返す戻り値
 * operator-symbol ：オーバーロードする演算子を指定
 *
 * 「関数と、演算子オーバーロードの比較」
 *
 * pos3 = pos1 + pos2;
 *
 * pos3 = pos1.addPos(pos2);
 *
*/