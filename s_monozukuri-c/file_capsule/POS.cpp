#include <stdio.h>
#include "POS.h"

//コンストラクタ
POS::POS()
{
    x = 0;
    y = 0;
}

//メンバ設定するためのメンバ関数
int POS::setPos(int tmp_x, int tmp_y)
{
    //値の範囲チェック
    if (tmp_x < -100 || 100 < tmp_x || tmp_y < -100 || 100 < tmp_y)
    {
        return -1;
    }

    x = tmp_x;
    y = tmp_y;

    return 0;
}

//座標を表示する関数
void POS::printPos(void)
{
    printf("x = %d\ny = %d\n", x, y);
}