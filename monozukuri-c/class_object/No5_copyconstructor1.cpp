//***************************************************
/** コピーコンストラクタ【オブジェクトを使った初期化方法】
 * https://monozukuri-c.com/langcpp-copyconstructor/
 * 12/10
 */
//***************************************************

#include <stdio.h>

class POS
{
public:
    int x;
    int y;

    POS(int tmpx, int tmpy);
    POS(const POS &pos); //コピーコンストラクタ
    ~POS();
};

//引数付きのコンストラクタ
POS::POS(int tmpx, int tmpy)
{
    printf("コンストラクタ\n");
    x = tmpx;
    y = tmpy;
}

//コピーコンストラクタ
POS::POS(const POS &pos)
{
    printf("コピーコンストラクタ\n");
    x = pos.x;
    y = pos.y;
}

POS::~POS()
{
    printf("デストラクタ\n");
}

int main(void)
{
    int num = 50; //int型変数num の定義と初期化

    num = 10; //代入
    num = 20; //代入

    //************************************************************
    //コピーコンストラクタ呼び出しのタイミング
    POS posA(100, 200); //posAに対するコンストラクタ呼び出し
    POS posB = posA;    //posBに対するコピーコンストラクタ呼び出し
    //コピコンは未定義の為、自動で定義される

    printf("posB.x : %d posB.y : %d\n", posB.x, posB.y);

    //************************************************************
    posB.x = 500;

    printf(">> posB.x = 500;\n");
    printf("posA.x = %d\n", posA.x);
    printf("posB.x = %d\n", posB.x);

    //************************************************************
    //コピーコンストラクタ定義の確認用
    POS posX(50, 10);
    POS posXX = posX; //コピーコンストラクタの呼び出し
    POS posXXX(posX); // () を使ったコピーコンストラクタ呼び出し
    // posXX = posX;

    return 0;
}

/**
 * 「コピーコンストラクタ」
 * 概要：同じクラスのオブジェクトを使って初期化する時に呼ばれるメンバ関数（オブジェクトをコピーし、初期化する機能）
 *
 * 初期化：変数定義と同時に値を入れる ※生成時に1度のみ※
 * 代入：定義済みの変数に値を入れる
 *
 * 定義方法
 * POS::POS(const POS & pos) {
 *      x = pos.x;
 *      y = pos.y;
 * }
 *
 * const POS & ←同名クラスのconst付きの参照を指定
 *
 * const定数を付けることで、コピー元のオブジェクトの書き換えを防止する
 *
*/