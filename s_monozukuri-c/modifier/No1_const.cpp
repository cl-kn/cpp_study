//***************************************************
/**const【機能拡張された利用方法をシーン毎に解説】
 * ➀ 参照型の引数に付与
 * ➁ メンバ関数に付与
 * ➂ 「const」を付与したメンバ変数
 * ➃ define の代わりに使用する
 * https://monozukuri-c.com/langcpp-funclist-const/
 * 12/22
 */
//***************************************************

#include <stdio.h>
// #include <iostream>
#include "POS.h"

//#define を使った定数定義
#define D_INIT_NUM (50)
#define D_MAXNUM (10)

//const を使った定数定義
const int C_INIT_NUM = 50;
const int C_MAXNUM = 10;

#if 0
class POS
{
private:
    int x;
    int y;

public:
    POS()
    {
        x = 0;
        y = 0;
    }

    //コピーコンストラクタ
    //関数の引数で受け渡されるクラスオブジェクトには、「const」修飾子を付与
    //渡されたクラスオブジェクトの状態を変更しない事を保証！
    POS(const POS &pos)
    {
        x = pos.x;
        y = pos.y;

        // constオブジェクトの書き換えはビルドエラー
        // pos.x = 100;
    }
};
#endif

int main(void)
{
    // ➂ 「const」を付与したメンバ変数

    const POS pos1;

    // 「const」付きのメンバ関数
    int x = pos1.get_x();
    int y = pos1.get_y();

    // 「const」無しのメンバ関数
    // pos1.set_x(100); // ビルドエラー
    // pos1.set_x(200); // ビルドエラー

    // ➃ define の代わりに使用する
    int i;
    int num[C_MAXNUM];

    for (i = 0; i < C_MAXNUM; i++)
    {
        num[i] = C_INIT_NUM;
        printf("num[%d] : %d\n", i, num[i]);
        // std::cout << num[i] << std::endl;
    }

    return 0;
}

/** ・オブジェクトの変更を防止する仕組み
 *
 * ➂ 「const」を付与したメンバ変数
 * ・メンバ変数を変更する必要がないメンバ関数には、「const」を付与する
 *
 * ➃ define の代わりに使用する
 * ・プリプロセッサではなく、「const」を使用することで、型チェックや文法をコンパイラにチェックさせられる
 *
*/