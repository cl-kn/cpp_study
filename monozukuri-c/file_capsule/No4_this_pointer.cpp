//***************************************************
/** thisポインタ【オブジェクト自身を示す隠されたポインタ】
 * https://monozukuri-c.com/langcpp-this-pointer/
 * 12/17
 *
 */
//***************************************************

#include <stdio.h>

class POS
{
private:
    int x;
    int y;

public:
    POS(int tmp_x, int tmp_y);
    void printPos();
};

//コンストラクタ
POS::POS(int tmp_x, int tmp_y)
{
    this->x = tmp_x;
    this->y = tmp_y;
}

//座標表示
void POS::printPos()
{
    printf("this: 0x%p x:%d this: 0x%p y:%d\n\n", this, this->x, this->y);
}

int main()
{
    //posAオブジェクト
    POS posA(100, 200);
    printf("posA: 0x%p\n", &posA);
    posA.printPos();

    //posBオブジェクト
    POS posB(300, 400);
    printf("posB: 0x%p\n", &posB);
    posB.printPos();

    return 0;
}