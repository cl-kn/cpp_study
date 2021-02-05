//***************************************************
/** 21/01/14
 * リスト2.19 「仮引数の型が異なったオーバーロード」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

typedef struct
{
    int x;
    int y;
} S_VECTOR2D;

//整数型のオーバーロード
int add(int left, int right)
{
    return left + right;
}

//浮動小数点型のオーバーロード
double add(double left, double right)
{
    return left + right;
}

//２次元ベクトル用のオーバーロード
S_VECTOR2D add(S_VECTOR2D left, S_VECTOR2D right)
{
    S_VECTOR2D v;
    v.x = left.x + right.x;
    v.y = left.y + right.y;

    return v;
}

int main(void)
{
    int integer = add(1, 2);             //3
    double floating = add(42.195, 3.15); //45.345
    S_VECTOR2D v = {1, 5};
    S_VECTOR2D q = {2, 9};
    S_VECTOR2D w = add(v, q);   //w.x = 3 , w.y = 14

    std::cout << integer << std::endl;
    std::cout << floating << std::endl;
    std::cout <<"w.x = "<< w.x <<" w.y = " <<  w.y << std::endl;

    return 0;
}