//***************************************************
/** 12/21 */
//***************************************************

#include "POS.h"
#include <stdio.h>

//コンストラクタ
POS::POS()
{
    this->x = 0;
    this->y = 0;
}

//関数のオーバーロード
//座標クリア
void POS::setPos()
{
    this->x = 0;
    this->y = 0;
}

//任意座標の設定
void POS::setPos(int x, int y)
{
    this->x = x;
    this->y = y;
}

//３Ｄ座標からの座標設定
void POS::setPos(S_Pos3D pos3d)
{
    this->x = pos3d.x;
    this->y = pos3d.y;
}

//座標の出力
void POS::printPos()
{
    printf("x:%d y:%d\n", this->x, this->y);
}