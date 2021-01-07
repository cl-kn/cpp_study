//***************************************************
/** 21/01/07
 * P73 list2.2 構造体を受け取る関数
 */
//***************************************************

#include <iostream>

typedef struct
{
    int id;    //商品ID
    int price; //単価
    int stock; //在庫数

} S_PRODUCT;

//構造体変数 を受け取る関数
void show_struct(S_PRODUCT product)
{

    std::cout << "pen id = " << product.id << std::endl;
    std::cout << "pen price = " << product.price << std::endl;
    std::cout << "pen stock = " << product.stock << std::endl;
}

int main(void)
{
    //構造体変数の生成と初期化
    S_PRODUCT pen = {
        1,   //商品ID
        200, //単価
        50   //在庫数
    };

    // S_PRODUCT *s_ptr = &pen; //構造体へのポインタ変数

    show_struct(pen);

    return 0;
}