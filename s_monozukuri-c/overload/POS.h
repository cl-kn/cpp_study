//***************************************************
/** 12/21 */
//***************************************************

#ifndef POS_H
#define POS_H

//3D座標管理構造体
typedef struct
{
    int x;
    int y;
    int z;
} S_Pos3D;

class POS
{
private:
    int x;
    int y;

public:
    POS(); //コンストラクタ

    //同名メンバ関数3つ（オーバーロード）
    void setPos();
    void setPos(int x, int y);
    void setPos(S_Pos3D pos3d);

    void printPos();
};

#endif