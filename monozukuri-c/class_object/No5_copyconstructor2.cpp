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
    POS(const POS &pos);
    ~POS();
};

//コンストラクタの定義
POS::POS(int tmpx, int tmpy)
{
    printf(">>コンストラクタ\n");
    x = tmpx;
    y = tmpy;
}

//  コピーコンストラクタの定義
POS::POS(const POS &pos)
{
    printf(">>コピーコンストラクタ\n");
    x = pos.x;
    y = pos.y;
}

POS::~POS()
{
    printf(">>デストラクタ\n");
}

int main()
{
    POS posA(100, 200); //  初期化

    // printf("*****************************\n");

    POS posB = posA; //  コピーによる初期化

    // posB = posA; //  代入

    return 0;
}