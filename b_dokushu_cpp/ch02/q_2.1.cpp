//***************************************************
/** 21/1/7
 * 練習問題2.1
 */
//***************************************************

#include <iostream>
#include <stdio.h>

typedef struct
{
    int id;
    int price;
    int stock;
} S_PRODUCT;

//構造体
struct S
{
    int x;
    int y;
};

//共用体
union U
{
    S s;
    int ux = 10; //共用体の初期化は１つのみ
    int uy;
};

void show_struct(S_PRODUCT *product)
{
    std::cout << "pen id = " << product->id << std::endl;
    std::cout << "pen price = " << product->price << std::endl;
    std::cout << "pen stock = " << product->stock << std::endl;

    //以下も正解
    // 引数(S_PRODUCT product)
    // std::cout << "pen id = " << (&product)->id << std::endl;
    // ...
}

int main(void)
{
    //問題１
    S_PRODUCT pen = {
        1,
        200,
        150};

    S_PRODUCT *s_pen = &pen;
    show_struct(s_pen);
    //以下もOK
    //show_struct(&pen);

    //問題２
    /**
     * 共用体：
     * 構造体：関連する変数をまとめ、一つの構造として扱う
    */

    //問題３

    U u = {};
    S s = {};

    u.s.x = 10;
    u.s.y = 20;

    std::cout << u.s.x << std::endl; //10
    std::cout << u.s.y << std::endl; //20

    std::cout << "&(u.s.x) = " << &(u.s.x) << std::endl; //異なるアドレス値
    std::cout << "&(u.s.y) = " << &(u.s.y) << std::endl; //

    std::cout << "&(u.ux) = " << &(u.ux) << std::endl; //同じアドレス値
    std::cout << "&(u.uy) = " << &(u.uy) << std::endl;

    std::cout << u.ux << std::endl; //10
    std::cout << u.uy << std::endl; //10

    return 0;
}