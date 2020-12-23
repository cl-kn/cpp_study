//***************************************************
/** 12/21 */
//***************************************************

#include "POS2.h"

POS2::POS2()
{
    this->x = 0;
    this->y = 0;
}

void POS2::setPos(int x, int y)
{

    this->x = x;
    this->y = y;
}

//演算子オーバーロード
POS2 POS2::operator+(POS2 rhs)
{
    POS2 pos2;

    pos2.x = this->x + rhs.x;
    pos2.y = this->y + rhs.y;

    return pos2; // （クラス変数＋引数）の結果を、クラスのオブジェクトとして返却
}

//演算子オーバーロード
//引数：整数型
POS2 POS2::operator+(int value)
{
    POS2 pos2;

    pos2.x = this->x + value;
    pos2.y = this->y + value;

    return pos2;
}