//***************************************************
/** 12/21 */
//***************************************************

#include "POS2.h"
#include <stdio.h>

int main()
{
    POS2 pos1; //座標１
    POS2 pos2; //座標２
    POS2 pos3;

    POS3 pos3_1;

    pos1.setPos(100, 200);
    pos2.setPos(300, 400);

    // クラスオブジェクト同士の足し算
    // 「+」演算子のオーバーロードで実施可能
    pos3 = pos1 + pos2;          //「+」演算子を使った呼び出し
    pos3 = pos1.operator+(pos2); //メンバ関数を使った呼び出し

    pos2 = pos1 + 50;

    printf("pos3.x: %d pos3.y: %d\n", pos3.x, pos3.y); // 400 , 600
    printf("pos2.x: %d pos2.y: %d\n", pos2.x, pos2.y); // 150 , 250

    printf("pos3_1.x:%d\n", pos3_1.x);
}